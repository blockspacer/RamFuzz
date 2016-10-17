// Copyright 2016 The RamFuzz contributors. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <vector>

namespace NS {
struct Element {
  void e() {}
};
class A {
public:
  int sum = 3;
  A(const std::vector<double> &) {}
  virtual std::vector<unsigned> f(const std::vector<bool> *) = 0;
  virtual void g1(std::vector<Element>) = 0;
  virtual void g2(const std::vector<Element>) = 0;
  virtual void g3(std::vector<Element> &) = 0;
  virtual void g4(const std::vector<Element> &) = 0;
  virtual void g5(std::vector<Element> *) = 0;
  virtual void g6(const std::vector<Element> *) = 0;
};
}

class C {
public:
  int sum = 33;
  void g(const NS::A &a) { sum -= a.sum; }
};
