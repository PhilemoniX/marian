using namespace functional;
template void Element<Assign<Var<1>, BinaryFunctor<elem::Mult, Assignee<2>, UnaryFunctor<elem::Logit, Assignee<2>>>>, marian::Tensor>(Assign<Var<1>, BinaryFunctor<elem::Mult, Assignee<2>, UnaryFunctor<elem::Logit, Assignee<2>>>>, marian::Tensor, marian::Tensor);
template void Element<Assign<Var<1>, UnaryFunctor<elem::Exp, Assignee<2>>>, marian::Tensor>(Assign<Var<1>, UnaryFunctor<elem::Exp, Assignee<2>>>, marian::Tensor, marian::Tensor);
template void Element<Assign<Var<1>, UnaryFunctor<elem::Log, Assignee<2>>>, marian::Tensor>(Assign<Var<1>, UnaryFunctor<elem::Log, Assignee<2>>>, marian::Tensor, marian::Tensor);
template void Element<Assign<Var<1>, BinaryFunctor<elem::sPReLU, Assignee<2>, Capture>>, marian::Tensor>(Assign<Var<1>, BinaryFunctor<elem::sPReLU, Assignee<2>, Capture>>, marian::Tensor, marian::Tensor);
template void Element<Assign<Var<1>, UnaryFunctor<elem::sReLU, Assignee<2>>>, marian::Tensor>(Assign<Var<1>, UnaryFunctor<elem::sReLU, Assignee<2>>>, marian::Tensor, marian::Tensor);
template void Element<Assign<Var<1>, UnaryFunctor<elem::Logit, Assignee<2>>>, marian::Tensor>(Assign<Var<1>, UnaryFunctor<elem::Logit, Assignee<2>>>, marian::Tensor, marian::Tensor);
template void Element<Assign<Var<1>, BinaryFunctor<elem::Minus, Assignee<1>, BinaryFunctor<elem::Mult, Capture, Assignee<2>>>>, marian::Tensor>(Assign<Var<1>, BinaryFunctor<elem::Minus, Assignee<1>, BinaryFunctor<elem::Mult, Capture, Assignee<2>>>>, marian::Tensor, marian::Tensor);
template void Element<Assign<Var<1>, BinaryFunctor<elem::Plus, Assignee<1>, BinaryFunctor<elem::Mult, Assignee<2>, Assignee<2>>>>, marian::Tensor>(Assign<Var<1>, BinaryFunctor<elem::Plus, Assignee<1>, BinaryFunctor<elem::Mult, Assignee<2>, Assignee<2>>>>, marian::Tensor, marian::Tensor);
template void Element<Assign<Var<1>, BinaryFunctor<elem::Minus, Assignee<1>, BinaryFunctor<elem::Mult, BinaryFunctor<elem::Div, Capture, BinaryFunctor<elem::Plus, UnaryFunctor<elem::Sqrt, Assignee<2>>, Capture>>, Assignee<3>>>>, marian::Tensor, marian::Tensor>(Assign<Var<1>, BinaryFunctor<elem::Minus, Assignee<1>, BinaryFunctor<elem::Mult, BinaryFunctor<elem::Div, Capture, BinaryFunctor<elem::Plus, UnaryFunctor<elem::Sqrt, Assignee<2>>, Capture>>, Assignee<3>>>>, marian::Tensor, marian::Tensor, marian::Tensor);
template void Element<Assign<Var<1>, BinaryFunctor<elem::Plus, BinaryFunctor<elem::Mult, Capture, Assignee<1>>, BinaryFunctor<elem::Mult, Capture, Assignee<2>>>>, marian::Tensor>(Assign<Var<1>, BinaryFunctor<elem::Plus, BinaryFunctor<elem::Mult, Capture, Assignee<1>>, BinaryFunctor<elem::Mult, Capture, Assignee<2>>>>, marian::Tensor, marian::Tensor);
template void Element<Assign<Var<1>, BinaryFunctor<elem::Plus, BinaryFunctor<elem::Mult, Capture, Assignee<1>>, BinaryFunctor<elem::Mult, Capture, BinaryFunctor<elem::Mult, Assignee<2>, Assignee<2>>>>>, marian::Tensor>(Assign<Var<1>, BinaryFunctor<elem::Plus, BinaryFunctor<elem::Mult, Capture, Assignee<1>>, BinaryFunctor<elem::Mult, Capture, BinaryFunctor<elem::Mult, Assignee<2>, Assignee<2>>>>>, marian::Tensor, marian::Tensor);
template void Element<Assign<Var<1>, BinaryFunctor<elem::Minus, Assignee<1>, BinaryFunctor<elem::Div, BinaryFunctor<elem::Mult, Capture, BinaryFunctor<elem::Div, Assignee<2>, Capture>>, BinaryFunctor<elem::Plus, UnaryFunctor<elem::Sqrt, BinaryFunctor<elem::Div, Assignee<3>, Capture>>, Capture>>>>, marian::Tensor, marian::Tensor>(Assign<Var<1>, BinaryFunctor<elem::Minus, Assignee<1>, BinaryFunctor<elem::Div, BinaryFunctor<elem::Mult, Capture, BinaryFunctor<elem::Div, Assignee<2>, Capture>>, BinaryFunctor<elem::Plus, UnaryFunctor<elem::Sqrt, BinaryFunctor<elem::Div, Assignee<3>, Capture>>, Capture>>>>, marian::Tensor, marian::Tensor, marian::Tensor);
template void Element<Assign<Var<1>, BinaryFunctor<elem::Plus, Assignee<1>, BinaryFunctor<elem::Div, Assignee<2>, Capture>>>, marian::Tensor>(Assign<Var<1>, BinaryFunctor<elem::Plus, Assignee<1>, BinaryFunctor<elem::Div, Assignee<2>, Capture>>>, marian::Tensor, marian::Tensor);
template void Element<Assign<Var<1>, BinaryFunctor<elem::Mult, Capture, Assignee<1>>>>(Assign<Var<1>, BinaryFunctor<elem::Mult, Capture, Assignee<1>>>, marian::Tensor);
template void Element<Assign<Var<1>, BinaryFunctor<elem::Clip, Assignee<1>, Capture>>>(Assign<Var<1>, BinaryFunctor<elem::Clip, Assignee<1>, Capture>>, marian::Tensor);
template void Element<Assign<Var<1>, BinaryFunctor<elem::Mult, Assignee<2>, Assignee<2>>>, marian::Tensor>(Assign<Var<1>, BinaryFunctor<elem::Mult, Assignee<2>, Assignee<2>>>, marian::Tensor, marian::Tensor);
template void Element<Assign<Var<1>, UnaryFunctor<elem::Sqrt, BinaryFunctor<elem::Plus, Assignee<2>, Capture>>>, marian::Tensor>(Assign<Var<1>, UnaryFunctor<elem::Sqrt, BinaryFunctor<elem::Plus, Assignee<2>, Capture>>>, marian::Tensor, marian::Tensor);
template void Element<Assign<Var<1>, UnaryFunctor<elem::Tanh, Assignee<2>>>, marian::Tensor>(Assign<Var<1>, UnaryFunctor<elem::Tanh, Assignee<2>>>, marian::Tensor, marian::Tensor);
template void Element<Assign<Var<1>, UnaryFunctor<elem::Tanh, BinaryFunctor<elem::Plus, Assignee<2>, Assignee<3>>>>, marian::Tensor, marian::Tensor>(Assign<Var<1>, UnaryFunctor<elem::Tanh, BinaryFunctor<elem::Plus, Assignee<2>, Assignee<3>>>>, marian::Tensor, marian::Tensor, marian::Tensor);
template void Element<Assign<Var<1>, UnaryFunctor<elem::Tanh, BinaryFunctor<elem::Plus, BinaryFunctor<elem::Plus, Assignee<2>, Assignee<3>>, Assignee<4>>>>, marian::Tensor, marian::Tensor, marian::Tensor>(Assign<Var<1>, UnaryFunctor<elem::Tanh, BinaryFunctor<elem::Plus, BinaryFunctor<elem::Plus, Assignee<2>, Assignee<3>>, Assignee<4>>>>, marian::Tensor, marian::Tensor, marian::Tensor, marian::Tensor);
template void Element<Assign<Var<1>, BinaryFunctor<elem::Plus, BinaryFunctor<elem::Plus, Assignee<2>, Assignee<3>>, Assignee<4>>>, marian::Tensor, marian::Tensor, marian::Tensor>(Assign<Var<1>, BinaryFunctor<elem::Plus, BinaryFunctor<elem::Plus, Assignee<2>, Assignee<3>>, Assignee<4>>>, marian::Tensor, marian::Tensor, marian::Tensor, marian::Tensor);
template void Element<Assign<Var<1>, BinaryFunctor<elem::Plus, Assignee<1>, Assignee<2>>>, marian::Tensor>(Assign<Var<1>, BinaryFunctor<elem::Plus, Assignee<1>, Assignee<2>>>, marian::Tensor, marian::Tensor);
template void Element<Assign<Var<1>, UnaryFunctor<elem::Tanh, Assignee<1>>>>(Assign<Var<1>, UnaryFunctor<elem::Tanh, Assignee<1>>>, marian::Tensor);
template void Element<Assign<Var<1>, BinaryFunctor<elem::Mult, Capture, Assignee<2>>>, marian::Tensor>(Assign<Var<1>, BinaryFunctor<elem::Mult, Capture, Assignee<2>>>, marian::Tensor, marian::Tensor);
template void Element<Assign<Var<1>, BinaryFunctor<elem::Plus, Assignee<2>, Capture>>, marian::Tensor>(Assign<Var<1>, BinaryFunctor<elem::Plus, Assignee<2>, Capture>>, marian::Tensor, marian::Tensor);
template void Element<Assign<Var<1>, BinaryFunctor<elem::Div, Assignee<2>, Assignee<3>>>, marian::Tensor, marian::Tensor>(Assign<Var<1>, BinaryFunctor<elem::Div, Assignee<2>, Assignee<3>>>, marian::Tensor, marian::Tensor, marian::Tensor);
template void Element<Assign<Var<1>, BinaryFunctor<elem::Mult, Assignee<2>, Assignee<3>>>, marian::Tensor, marian::Tensor>(Assign<Var<1>, BinaryFunctor<elem::Mult, Assignee<2>, Assignee<3>>>, marian::Tensor, marian::Tensor, marian::Tensor);
template void Element<Assign<Var<1>, BinaryFunctor<elem::Minus, Assignee<2>, Assignee<3>>>, marian::Tensor, marian::Tensor>(Assign<Var<1>, BinaryFunctor<elem::Minus, Assignee<2>, Assignee<3>>>, marian::Tensor, marian::Tensor, marian::Tensor);
template void Element<Assign<Var<1>, BinaryFunctor<elem::Plus, Assignee<2>, Assignee<3>>>, marian::Tensor, marian::Tensor>(Assign<Var<1>, BinaryFunctor<elem::Plus, Assignee<2>, Assignee<3>>>, marian::Tensor, marian::Tensor, marian::Tensor);
template void Element<Assign<Var<1>, UnaryFunctor<elem::Neg, Assignee<2>>>, marian::Tensor>(Assign<Var<1>, UnaryFunctor<elem::Neg, Assignee<2>>>, marian::Tensor, marian::Tensor);
template void Element<Assign<Var<1>, TernaryFunctor<elem::IfThenElse, BinaryFunctor<elem::Leq, UnaryFunctor<elem::Abs, Assignee<1>>, Capture>, Capture, Assignee<1>>>>(Assign<Var<1>, TernaryFunctor<elem::IfThenElse, BinaryFunctor<elem::Leq, UnaryFunctor<elem::Abs, Assignee<1>>, Capture>, Capture, Assignee<1>>>, marian::Tensor);

template void marian::gpu::Element<marian::functional::Assign<marian::functional::Var<1>, marian::functional::BinaryFunctor<marian::functional::elem::Mult, marian::functional::Assignee<1>, marian::functional::Capture> >>(marian::functional::Assign<marian::functional::Var<1>, marian::functional::BinaryFunctor<marian::functional::elem::Mult, marian::functional::Assignee<1>, marian::functional::Capture> >, std::shared_ptr<marian::TensorBase>);