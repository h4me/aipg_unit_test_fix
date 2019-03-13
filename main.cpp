#include <iostream>
#include <functional>

namespace framework {

typedef std::function<void(int)> ExecutionContext; 

class OpKernelBase {
 public:

 virtual void Compute(const ExecutionContext& context) const = 0;

  virtual ~OpKernelBase() = default;
};


template <typename T>
class OpKernel : public OpKernelBase {
 public:
  using ELEMENT_TYPE = T;
 
};

}

template <typename Functor>
class MKLDNNActivationKernel
    : public framework::OpKernel<typename Functor::ELEMENT_TYPE> {
 public:
 
  void Compute(const framework::ExecutionContext &ctx) const override {
//    Functor functor;
 //   functor(ctx);
  }

};

template<class T>
struct CustomFunctor {
 typedef T ELEMENT_TYPE;
};

int main(int argc, char **argv) {


 
 MKLDNNActivationKernel<CustomFunctor<int> > kk;



 




  return 0;
}
