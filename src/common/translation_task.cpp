#include "translation_task.h"
#include "search.h"
#include "output_collector.h"
#include "printer.h"

using namespace std;

namespace amunmt {

void TranslationTask(const God &god, std::shared_ptr<Sentences> sentences) {
  Search &search = god.GetSearch();

  try {
    std::shared_ptr<Histories> histories = search.Process(god, *sentences);

    OutputCollector &outputCollector = god.GetOutputCollector();
    for (size_t i = 0; i < histories->size(); ++i) {
      const History &history = *histories->at(i);
      size_t lineNum = history.GetLineNum();

      std::stringstream strm;
      Printer(god, history, strm);

      outputCollector.Write(lineNum, strm.str());
    }
  }
#ifdef CUDA
  catch(thrust::system_error &e)
  {
    std::cerr << "CUDA error during some_function: " << e.what() << std::endl;
    abort();
  }
#endif
  catch(std::bad_alloc &e)
  {
    std::cerr << "Bad memory allocation during some_function: " << e.what() << std::endl;
    abort();
  }
  catch(std::runtime_error &e)
  {
    std::cerr << "Runtime error during some_function: " << e.what() << std::endl;
    abort();
  }
  catch(...)
  {
    std::cerr << "Some other kind of error during some_function" << std::endl;
    abort();
  }

}

}
