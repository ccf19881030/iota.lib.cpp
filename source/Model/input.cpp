//
// MIT License
//
// Copyright (c) 2017 Thibault Martinez
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
//
//

#include <Model/input.hpp>

Input::Input() : balance_(0), keyIndex_(0), security_(0) {
}

Input::Input(const IOTA::Type::Trytes& address, const int64_t& balance, const int32_t& keyIndex,
             const int32_t& security)
    : address_(address), balance_(balance), keyIndex_(keyIndex), security_(security) {
}

const IOTA::Type::Trytes&
Input::getAddress() const {
  return this->address_;
}

void
Input::setAddress(const IOTA::Type::Trytes& addr) {
  this->address_ = addr;
}

const int64_t&
Input::getBalance() const {
  return this->balance_;
}

void
Input::setBalance(const int64_t& balance) {
  this->balance_ = balance;
}

const int32_t&
Input::getKeyIndex() const {
  return this->keyIndex_;
}

void
Input::setKeyIndex(const int32_t& keyIndex) {
  this->keyIndex_ = keyIndex;
}

const int32_t&
Input::getSecurity() const {
  return this->security_;
}

void
Input::setSecurity(const int32_t& security) {
  this->security_ = security;
}
