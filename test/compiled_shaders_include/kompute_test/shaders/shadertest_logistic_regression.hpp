/*
    THIS FILE HAS BEEN AUTOMATICALLY GENERATED - DO NOT EDIT

    ---

    Copyright 2020 The Institute for Ethical AI & Machine Learning

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
*/

#ifndef SHADEROP_SHADERTEST_LOGISTIC_REGRESSION_HPP
#define SHADEROP_SHADERTEST_LOGISTIC_REGRESSION_HPP

namespace kp {
namespace shader_data {
static const unsigned char test_shaders_glsl_test_logistic_regression_comp_spv[] = {
  0x03, 0x02, 0x23, 0x07, 0x00, 0x00, 0x01, 0x00, 0x08, 0x00, 0x08, 0x00,
  0xb3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x00, 0x02, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x06, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x47, 0x4c, 0x53, 0x4c, 0x2e, 0x73, 0x74, 0x64, 0x2e, 0x34, 0x35, 0x30,
  0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x06, 0x00, 0x05, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00, 0x00, 0x00,
  0x45, 0x00, 0x00, 0x00, 0x10, 0x00, 0x06, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x11, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x03, 0x00, 0x02, 0x00, 0x00, 0x00,
  0xc2, 0x01, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x05, 0x00,
  0x0a, 0x00, 0x00, 0x00, 0x73, 0x69, 0x67, 0x6d, 0x6f, 0x69, 0x64, 0x28,
  0x66, 0x31, 0x3b, 0x00, 0x05, 0x00, 0x03, 0x00, 0x09, 0x00, 0x00, 0x00,
  0x7a, 0x00, 0x00, 0x00, 0x05, 0x00, 0x08, 0x00, 0x12, 0x00, 0x00, 0x00,
  0x69, 0x6e, 0x66, 0x65, 0x72, 0x65, 0x6e, 0x63, 0x65, 0x28, 0x76, 0x66,
  0x32, 0x3b, 0x76, 0x66, 0x32, 0x3b, 0x66, 0x31, 0x3b, 0x00, 0x00, 0x00,
  0x05, 0x00, 0x03, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00,
  0x05, 0x00, 0x03, 0x00, 0x10, 0x00, 0x00, 0x00, 0x77, 0x00, 0x00, 0x00,
  0x05, 0x00, 0x03, 0x00, 0x11, 0x00, 0x00, 0x00, 0x62, 0x00, 0x00, 0x00,
  0x05, 0x00, 0x08, 0x00, 0x17, 0x00, 0x00, 0x00, 0x63, 0x61, 0x6c, 0x63,
  0x75, 0x6c, 0x61, 0x74, 0x65, 0x4c, 0x6f, 0x73, 0x73, 0x28, 0x66, 0x31,
  0x3b, 0x66, 0x31, 0x3b, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00,
  0x15, 0x00, 0x00, 0x00, 0x79, 0x48, 0x61, 0x74, 0x00, 0x00, 0x00, 0x00,
  0x05, 0x00, 0x03, 0x00, 0x16, 0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00,
  0x05, 0x00, 0x03, 0x00, 0x1a, 0x00, 0x00, 0x00, 0x6d, 0x00, 0x00, 0x00,
  0x05, 0x00, 0x03, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x4d, 0x00, 0x00, 0x00,
  0x05, 0x00, 0x03, 0x00, 0x26, 0x00, 0x00, 0x00, 0x7a, 0x00, 0x00, 0x00,
  0x05, 0x00, 0x04, 0x00, 0x2c, 0x00, 0x00, 0x00, 0x79, 0x48, 0x61, 0x74,
  0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0x2d, 0x00, 0x00, 0x00,
  0x70, 0x61, 0x72, 0x61, 0x6d, 0x00, 0x00, 0x00, 0x05, 0x00, 0x03, 0x00,
  0x42, 0x00, 0x00, 0x00, 0x69, 0x64, 0x78, 0x00, 0x05, 0x00, 0x08, 0x00,
  0x45, 0x00, 0x00, 0x00, 0x67, 0x6c, 0x5f, 0x47, 0x6c, 0x6f, 0x62, 0x61,
  0x6c, 0x49, 0x6e, 0x76, 0x6f, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x49,
  0x44, 0x00, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0x4a, 0x00, 0x00, 0x00,
  0x77, 0x43, 0x75, 0x72, 0x72, 0x00, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00,
  0x4c, 0x00, 0x00, 0x00, 0x62, 0x77, 0x69, 0x6e, 0x00, 0x00, 0x00, 0x00,
  0x06, 0x00, 0x04, 0x00, 0x4c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x77, 0x69, 0x6e, 0x00, 0x05, 0x00, 0x03, 0x00, 0x4e, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0x58, 0x00, 0x00, 0x00,
  0x62, 0x43, 0x75, 0x72, 0x72, 0x00, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00,
  0x5a, 0x00, 0x00, 0x00, 0x62, 0x62, 0x69, 0x6e, 0x00, 0x00, 0x00, 0x00,
  0x06, 0x00, 0x04, 0x00, 0x5a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x62, 0x69, 0x6e, 0x00, 0x05, 0x00, 0x03, 0x00, 0x5c, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0x5f, 0x00, 0x00, 0x00,
  0x78, 0x43, 0x75, 0x72, 0x72, 0x00, 0x00, 0x00, 0x05, 0x00, 0x03, 0x00,
  0x61, 0x00, 0x00, 0x00, 0x62, 0x78, 0x69, 0x00, 0x06, 0x00, 0x04, 0x00,
  0x61, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0x69, 0x00, 0x00,
  0x05, 0x00, 0x03, 0x00, 0x63, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x05, 0x00, 0x03, 0x00, 0x68, 0x00, 0x00, 0x00, 0x62, 0x78, 0x6a, 0x00,
  0x06, 0x00, 0x04, 0x00, 0x68, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x78, 0x6a, 0x00, 0x00, 0x05, 0x00, 0x03, 0x00, 0x6a, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0x6f, 0x00, 0x00, 0x00,
  0x79, 0x43, 0x75, 0x72, 0x72, 0x00, 0x00, 0x00, 0x05, 0x00, 0x03, 0x00,
  0x71, 0x00, 0x00, 0x00, 0x62, 0x79, 0x00, 0x00, 0x06, 0x00, 0x04, 0x00,
  0x71, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00,
  0x05, 0x00, 0x03, 0x00, 0x73, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x05, 0x00, 0x04, 0x00, 0x77, 0x00, 0x00, 0x00, 0x79, 0x48, 0x61, 0x74,
  0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0x78, 0x00, 0x00, 0x00,
  0x70, 0x61, 0x72, 0x61, 0x6d, 0x00, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00,
  0x7a, 0x00, 0x00, 0x00, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x00, 0x00, 0x00,
  0x05, 0x00, 0x04, 0x00, 0x7c, 0x00, 0x00, 0x00, 0x70, 0x61, 0x72, 0x61,
  0x6d, 0x00, 0x00, 0x00, 0x05, 0x00, 0x03, 0x00, 0x7f, 0x00, 0x00, 0x00,
  0x64, 0x5a, 0x00, 0x00, 0x05, 0x00, 0x03, 0x00, 0x83, 0x00, 0x00, 0x00,
  0x64, 0x57, 0x00, 0x00, 0x05, 0x00, 0x03, 0x00, 0x8a, 0x00, 0x00, 0x00,
  0x64, 0x42, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0x90, 0x00, 0x00, 0x00,
  0x62, 0x77, 0x6f, 0x75, 0x74, 0x69, 0x00, 0x00, 0x06, 0x00, 0x05, 0x00,
  0x90, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x77, 0x6f, 0x75, 0x74,
  0x69, 0x00, 0x00, 0x00, 0x05, 0x00, 0x03, 0x00, 0x92, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0x98, 0x00, 0x00, 0x00,
  0x62, 0x77, 0x6f, 0x75, 0x74, 0x6a, 0x00, 0x00, 0x06, 0x00, 0x05, 0x00,
  0x98, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x77, 0x6f, 0x75, 0x74,
  0x6a, 0x00, 0x00, 0x00, 0x05, 0x00, 0x03, 0x00, 0x9a, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0xa1, 0x00, 0x00, 0x00,
  0x62, 0x62, 0x6f, 0x75, 0x74, 0x00, 0x00, 0x00, 0x06, 0x00, 0x05, 0x00,
  0xa1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x62, 0x6f, 0x75, 0x74,
  0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x03, 0x00, 0xa3, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0xa8, 0x00, 0x00, 0x00,
  0x62, 0x6c, 0x6f, 0x75, 0x74, 0x00, 0x00, 0x00, 0x06, 0x00, 0x05, 0x00,
  0xa8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6c, 0x6f, 0x75, 0x74,
  0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x03, 0x00, 0xaa, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0xac, 0x00, 0x00, 0x00,
  0x70, 0x61, 0x72, 0x61, 0x6d, 0x00, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00,
  0xae, 0x00, 0x00, 0x00, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x00, 0x00, 0x00,
  0x47, 0x00, 0x04, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x45, 0x00, 0x00, 0x00,
  0x0b, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00,
  0x4b, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x48, 0x00, 0x05, 0x00, 0x4c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x23, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x03, 0x00,
  0x4c, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00,
  0x4e, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x47, 0x00, 0x04, 0x00, 0x4e, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x59, 0x00, 0x00, 0x00,
  0x06, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00,
  0x5a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x03, 0x00, 0x5a, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x5c, 0x00, 0x00, 0x00,
  0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00,
  0x5c, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x47, 0x00, 0x04, 0x00, 0x60, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x61, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x47, 0x00, 0x03, 0x00, 0x61, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
  0x47, 0x00, 0x04, 0x00, 0x63, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x63, 0x00, 0x00, 0x00,
  0x21, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00,
  0x67, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x48, 0x00, 0x05, 0x00, 0x68, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x23, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x03, 0x00,
  0x68, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00,
  0x6a, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x47, 0x00, 0x04, 0x00, 0x6a, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x70, 0x00, 0x00, 0x00,
  0x06, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00,
  0x71, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x03, 0x00, 0x71, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x73, 0x00, 0x00, 0x00,
  0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00,
  0x73, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x47, 0x00, 0x04, 0x00, 0x8f, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x90, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x47, 0x00, 0x03, 0x00, 0x90, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
  0x47, 0x00, 0x04, 0x00, 0x92, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x92, 0x00, 0x00, 0x00,
  0x21, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00,
  0x97, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x48, 0x00, 0x05, 0x00, 0x98, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x23, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x03, 0x00,
  0x98, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00,
  0x9a, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x47, 0x00, 0x04, 0x00, 0x9a, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00,
  0x05, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0xa0, 0x00, 0x00, 0x00,
  0x06, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00,
  0xa1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x03, 0x00, 0xa1, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0xa3, 0x00, 0x00, 0x00,
  0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00,
  0xa3, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00,
  0x47, 0x00, 0x04, 0x00, 0xa7, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0xa8, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x47, 0x00, 0x03, 0x00, 0xa8, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
  0x47, 0x00, 0x04, 0x00, 0xaa, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0xaa, 0x00, 0x00, 0x00,
  0x21, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00,
  0xb2, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00,
  0x13, 0x00, 0x02, 0x00, 0x02, 0x00, 0x00, 0x00, 0x21, 0x00, 0x03, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x16, 0x00, 0x03, 0x00,
  0x06, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00,
  0x07, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x21, 0x00, 0x04, 0x00, 0x08, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x07, 0x00, 0x00, 0x00, 0x17, 0x00, 0x04, 0x00, 0x0c, 0x00, 0x00, 0x00,
  0x06, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00,
  0x0d, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
  0x21, 0x00, 0x06, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x0d, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00,
  0x21, 0x00, 0x05, 0x00, 0x14, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x07, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00,
  0x19, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x3b, 0x00, 0x04, 0x00, 0x19, 0x00, 0x00, 0x00, 0x1a, 0x00, 0x00, 0x00,
  0x06, 0x00, 0x00, 0x00, 0x15, 0x00, 0x04, 0x00, 0x1b, 0x00, 0x00, 0x00,
  0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x32, 0x00, 0x04, 0x00,
  0x1b, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x2b, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x80, 0x3f, 0x20, 0x00, 0x04, 0x00, 0x41, 0x00, 0x00, 0x00,
  0x07, 0x00, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x00, 0x17, 0x00, 0x04, 0x00,
  0x43, 0x00, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
  0x20, 0x00, 0x04, 0x00, 0x44, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x43, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x44, 0x00, 0x00, 0x00,
  0x45, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00,
  0x1b, 0x00, 0x00, 0x00, 0x46, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x20, 0x00, 0x04, 0x00, 0x47, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x1b, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x03, 0x00, 0x4b, 0x00, 0x00, 0x00,
  0x06, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x03, 0x00, 0x4c, 0x00, 0x00, 0x00,
  0x4b, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x4d, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x4c, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00,
  0x4d, 0x00, 0x00, 0x00, 0x4e, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x15, 0x00, 0x04, 0x00, 0x4f, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x4f, 0x00, 0x00, 0x00,
  0x50, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00,
  0x51, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x2b, 0x00, 0x04, 0x00, 0x4f, 0x00, 0x00, 0x00, 0x54, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x03, 0x00, 0x59, 0x00, 0x00, 0x00,
  0x06, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x03, 0x00, 0x5a, 0x00, 0x00, 0x00,
  0x59, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x5b, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x5a, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00,
  0x5b, 0x00, 0x00, 0x00, 0x5c, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x1d, 0x00, 0x03, 0x00, 0x60, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x1e, 0x00, 0x03, 0x00, 0x61, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00,
  0x20, 0x00, 0x04, 0x00, 0x62, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x61, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x62, 0x00, 0x00, 0x00,
  0x63, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x03, 0x00,
  0x67, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x03, 0x00,
  0x68, 0x00, 0x00, 0x00, 0x67, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00,
  0x69, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x00,
  0x3b, 0x00, 0x04, 0x00, 0x69, 0x00, 0x00, 0x00, 0x6a, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x03, 0x00, 0x70, 0x00, 0x00, 0x00,
  0x06, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x03, 0x00, 0x71, 0x00, 0x00, 0x00,
  0x70, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x72, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x71, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00,
  0x72, 0x00, 0x00, 0x00, 0x73, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x1d, 0x00, 0x03, 0x00, 0x8f, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x1e, 0x00, 0x03, 0x00, 0x90, 0x00, 0x00, 0x00, 0x8f, 0x00, 0x00, 0x00,
  0x20, 0x00, 0x04, 0x00, 0x91, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x90, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x91, 0x00, 0x00, 0x00,
  0x92, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x03, 0x00,
  0x97, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x03, 0x00,
  0x98, 0x00, 0x00, 0x00, 0x97, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00,
  0x99, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x98, 0x00, 0x00, 0x00,
  0x3b, 0x00, 0x04, 0x00, 0x99, 0x00, 0x00, 0x00, 0x9a, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x1b, 0x00, 0x00, 0x00,
  0x9c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x03, 0x00,
  0xa0, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x03, 0x00,
  0xa1, 0x00, 0x00, 0x00, 0xa0, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00,
  0xa2, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xa1, 0x00, 0x00, 0x00,
  0x3b, 0x00, 0x04, 0x00, 0xa2, 0x00, 0x00, 0x00, 0xa3, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x03, 0x00, 0xa7, 0x00, 0x00, 0x00,
  0x06, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x03, 0x00, 0xa8, 0x00, 0x00, 0x00,
  0xa7, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0xa9, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0xa8, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00,
  0xa9, 0x00, 0x00, 0x00, 0xaa, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x2c, 0x00, 0x06, 0x00, 0x43, 0x00, 0x00, 0x00, 0xb2, 0x00, 0x00, 0x00,
  0x9c, 0x00, 0x00, 0x00, 0x9c, 0x00, 0x00, 0x00, 0x9c, 0x00, 0x00, 0x00,
  0x36, 0x00, 0x05, 0x00, 0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x02, 0x00,
  0x05, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x41, 0x00, 0x00, 0x00,
  0x42, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00,
  0x0d, 0x00, 0x00, 0x00, 0x4a, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00,
  0x3b, 0x00, 0x04, 0x00, 0x07, 0x00, 0x00, 0x00, 0x58, 0x00, 0x00, 0x00,
  0x07, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x0d, 0x00, 0x00, 0x00,
  0x5f, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00,
  0x07, 0x00, 0x00, 0x00, 0x6f, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00,
  0x3b, 0x00, 0x04, 0x00, 0x07, 0x00, 0x00, 0x00, 0x77, 0x00, 0x00, 0x00,
  0x07, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x0d, 0x00, 0x00, 0x00,
  0x78, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00,
  0x0d, 0x00, 0x00, 0x00, 0x7a, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00,
  0x3b, 0x00, 0x04, 0x00, 0x07, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x00,
  0x07, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x07, 0x00, 0x00, 0x00,
  0x7f, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00,
  0x0d, 0x00, 0x00, 0x00, 0x83, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00,
  0x3b, 0x00, 0x04, 0x00, 0x07, 0x00, 0x00, 0x00, 0x8a, 0x00, 0x00, 0x00,
  0x07, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x07, 0x00, 0x00, 0x00,
  0xac, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00,
  0x07, 0x00, 0x00, 0x00, 0xae, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00,
  0x70, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00,
  0x1c, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0x1a, 0x00, 0x00, 0x00,
  0x1d, 0x00, 0x00, 0x00, 0x41, 0x00, 0x05, 0x00, 0x47, 0x00, 0x00, 0x00,
  0x48, 0x00, 0x00, 0x00, 0x45, 0x00, 0x00, 0x00, 0x46, 0x00, 0x00, 0x00,
  0x3d, 0x00, 0x04, 0x00, 0x1b, 0x00, 0x00, 0x00, 0x49, 0x00, 0x00, 0x00,
  0x48, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0x42, 0x00, 0x00, 0x00,
  0x49, 0x00, 0x00, 0x00, 0x41, 0x00, 0x06, 0x00, 0x51, 0x00, 0x00, 0x00,
  0x52, 0x00, 0x00, 0x00, 0x4e, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00,
  0x50, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x53, 0x00, 0x00, 0x00, 0x52, 0x00, 0x00, 0x00, 0x41, 0x00, 0x06, 0x00,
  0x51, 0x00, 0x00, 0x00, 0x55, 0x00, 0x00, 0x00, 0x4e, 0x00, 0x00, 0x00,
  0x50, 0x00, 0x00, 0x00, 0x54, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00,
  0x06, 0x00, 0x00, 0x00, 0x56, 0x00, 0x00, 0x00, 0x55, 0x00, 0x00, 0x00,
  0x50, 0x00, 0x05, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x57, 0x00, 0x00, 0x00,
  0x53, 0x00, 0x00, 0x00, 0x56, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00,
  0x4a, 0x00, 0x00, 0x00, 0x57, 0x00, 0x00, 0x00, 0x41, 0x00, 0x06, 0x00,
  0x51, 0x00, 0x00, 0x00, 0x5d, 0x00, 0x00, 0x00, 0x5c, 0x00, 0x00, 0x00,
  0x50, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00,
  0x06, 0x00, 0x00, 0x00, 0x5e, 0x00, 0x00, 0x00, 0x5d, 0x00, 0x00, 0x00,
  0x3e, 0x00, 0x03, 0x00, 0x58, 0x00, 0x00, 0x00, 0x5e, 0x00, 0x00, 0x00,
  0x3d, 0x00, 0x04, 0x00, 0x1b, 0x00, 0x00, 0x00, 0x64, 0x00, 0x00, 0x00,
  0x42, 0x00, 0x00, 0x00, 0x41, 0x00, 0x06, 0x00, 0x51, 0x00, 0x00, 0x00,
  0x65, 0x00, 0x00, 0x00, 0x63, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00,
  0x64, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x66, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00,
  0x1b, 0x00, 0x00, 0x00, 0x6b, 0x00, 0x00, 0x00, 0x42, 0x00, 0x00, 0x00,
  0x41, 0x00, 0x06, 0x00, 0x51, 0x00, 0x00, 0x00, 0x6c, 0x00, 0x00, 0x00,
  0x6a, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x6b, 0x00, 0x00, 0x00,
  0x3d, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00, 0x6d, 0x00, 0x00, 0x00,
  0x6c, 0x00, 0x00, 0x00, 0x50, 0x00, 0x05, 0x00, 0x0c, 0x00, 0x00, 0x00,
  0x6e, 0x00, 0x00, 0x00, 0x66, 0x00, 0x00, 0x00, 0x6d, 0x00, 0x00, 0x00,
  0x3e, 0x00, 0x03, 0x00, 0x5f, 0x00, 0x00, 0x00, 0x6e, 0x00, 0x00, 0x00,
  0x3d, 0x00, 0x04, 0x00, 0x1b, 0x00, 0x00, 0x00, 0x74, 0x00, 0x00, 0x00,
  0x42, 0x00, 0x00, 0x00, 0x41, 0x00, 0x06, 0x00, 0x51, 0x00, 0x00, 0x00,
  0x75, 0x00, 0x00, 0x00, 0x73, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00,
  0x74, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x76, 0x00, 0x00, 0x00, 0x75, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00,
  0x6f, 0x00, 0x00, 0x00, 0x76, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00,
  0x0c, 0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00, 0x5f, 0x00, 0x00, 0x00,
  0x3e, 0x00, 0x03, 0x00, 0x78, 0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00,
  0x3d, 0x00, 0x04, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x7b, 0x00, 0x00, 0x00,
  0x4a, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0x7a, 0x00, 0x00, 0x00,
  0x7b, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x7d, 0x00, 0x00, 0x00, 0x58, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00,
  0x7c, 0x00, 0x00, 0x00, 0x7d, 0x00, 0x00, 0x00, 0x39, 0x00, 0x07, 0x00,
  0x06, 0x00, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x12, 0x00, 0x00, 0x00,
  0x78, 0x00, 0x00, 0x00, 0x7a, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x00,
  0x3e, 0x00, 0x03, 0x00, 0x77, 0x00, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x00,
  0x3d, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
  0x77, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x81, 0x00, 0x00, 0x00, 0x6f, 0x00, 0x00, 0x00, 0x83, 0x00, 0x05, 0x00,
  0x06, 0x00, 0x00, 0x00, 0x82, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
  0x81, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0x7f, 0x00, 0x00, 0x00,
  0x82, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x84, 0x00, 0x00, 0x00, 0x1a, 0x00, 0x00, 0x00, 0x88, 0x00, 0x05, 0x00,
  0x06, 0x00, 0x00, 0x00, 0x85, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00,
  0x84, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x0c, 0x00, 0x00, 0x00,
  0x86, 0x00, 0x00, 0x00, 0x5f, 0x00, 0x00, 0x00, 0x8e, 0x00, 0x05, 0x00,
  0x0c, 0x00, 0x00, 0x00, 0x87, 0x00, 0x00, 0x00, 0x86, 0x00, 0x00, 0x00,
  0x85, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x88, 0x00, 0x00, 0x00, 0x7f, 0x00, 0x00, 0x00, 0x8e, 0x00, 0x05, 0x00,
  0x0c, 0x00, 0x00, 0x00, 0x89, 0x00, 0x00, 0x00, 0x87, 0x00, 0x00, 0x00,
  0x88, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0x83, 0x00, 0x00, 0x00,
  0x89, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x8b, 0x00, 0x00, 0x00, 0x1a, 0x00, 0x00, 0x00, 0x88, 0x00, 0x05, 0x00,
  0x06, 0x00, 0x00, 0x00, 0x8c, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00,
  0x8b, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x8d, 0x00, 0x00, 0x00, 0x7f, 0x00, 0x00, 0x00, 0x85, 0x00, 0x05, 0x00,
  0x06, 0x00, 0x00, 0x00, 0x8e, 0x00, 0x00, 0x00, 0x8c, 0x00, 0x00, 0x00,
  0x8d, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0x8a, 0x00, 0x00, 0x00,
  0x8e, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x1b, 0x00, 0x00, 0x00,
  0x93, 0x00, 0x00, 0x00, 0x42, 0x00, 0x00, 0x00, 0x41, 0x00, 0x05, 0x00,
  0x07, 0x00, 0x00, 0x00, 0x94, 0x00, 0x00, 0x00, 0x83, 0x00, 0x00, 0x00,
  0x46, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x95, 0x00, 0x00, 0x00, 0x94, 0x00, 0x00, 0x00, 0x41, 0x00, 0x06, 0x00,
  0x51, 0x00, 0x00, 0x00, 0x96, 0x00, 0x00, 0x00, 0x92, 0x00, 0x00, 0x00,
  0x50, 0x00, 0x00, 0x00, 0x93, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00,
  0x96, 0x00, 0x00, 0x00, 0x95, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00,
  0x1b, 0x00, 0x00, 0x00, 0x9b, 0x00, 0x00, 0x00, 0x42, 0x00, 0x00, 0x00,
  0x41, 0x00, 0x05, 0x00, 0x07, 0x00, 0x00, 0x00, 0x9d, 0x00, 0x00, 0x00,
  0x83, 0x00, 0x00, 0x00, 0x9c, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00,
  0x06, 0x00, 0x00, 0x00, 0x9e, 0x00, 0x00, 0x00, 0x9d, 0x00, 0x00, 0x00,
  0x41, 0x00, 0x06, 0x00, 0x51, 0x00, 0x00, 0x00, 0x9f, 0x00, 0x00, 0x00,
  0x9a, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x9b, 0x00, 0x00, 0x00,
  0x3e, 0x00, 0x03, 0x00, 0x9f, 0x00, 0x00, 0x00, 0x9e, 0x00, 0x00, 0x00,
  0x3d, 0x00, 0x04, 0x00, 0x1b, 0x00, 0x00, 0x00, 0xa4, 0x00, 0x00, 0x00,
  0x42, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00,
  0xa5, 0x00, 0x00, 0x00, 0x8a, 0x00, 0x00, 0x00, 0x41, 0x00, 0x06, 0x00,
  0x51, 0x00, 0x00, 0x00, 0xa6, 0x00, 0x00, 0x00, 0xa3, 0x00, 0x00, 0x00,
  0x50, 0x00, 0x00, 0x00, 0xa4, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00,
  0xa6, 0x00, 0x00, 0x00, 0xa5, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00,
  0x1b, 0x00, 0x00, 0x00, 0xab, 0x00, 0x00, 0x00, 0x42, 0x00, 0x00, 0x00,
  0x3d, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00, 0xad, 0x00, 0x00, 0x00,
  0x77, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0xac, 0x00, 0x00, 0x00,
  0xad, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00,
  0xaf, 0x00, 0x00, 0x00, 0x6f, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00,
  0xae, 0x00, 0x00, 0x00, 0xaf, 0x00, 0x00, 0x00, 0x39, 0x00, 0x06, 0x00,
  0x06, 0x00, 0x00, 0x00, 0xb0, 0x00, 0x00, 0x00, 0x17, 0x00, 0x00, 0x00,
  0xac, 0x00, 0x00, 0x00, 0xae, 0x00, 0x00, 0x00, 0x41, 0x00, 0x06, 0x00,
  0x51, 0x00, 0x00, 0x00, 0xb1, 0x00, 0x00, 0x00, 0xaa, 0x00, 0x00, 0x00,
  0x50, 0x00, 0x00, 0x00, 0xab, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00,
  0xb1, 0x00, 0x00, 0x00, 0xb0, 0x00, 0x00, 0x00, 0xfd, 0x00, 0x01, 0x00,
  0x38, 0x00, 0x01, 0x00, 0x36, 0x00, 0x05, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00,
  0x37, 0x00, 0x03, 0x00, 0x07, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00,
  0xf8, 0x00, 0x02, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00,
  0x06, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00,
  0x7f, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00,
  0x1f, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x06, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x21, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x00,
  0x20, 0x00, 0x00, 0x00, 0x81, 0x00, 0x05, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x22, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00,
  0x88, 0x00, 0x05, 0x00, 0x06, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00,
  0x1e, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0xfe, 0x00, 0x02, 0x00,
  0x23, 0x00, 0x00, 0x00, 0x38, 0x00, 0x01, 0x00, 0x36, 0x00, 0x05, 0x00,
  0x06, 0x00, 0x00, 0x00, 0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x0e, 0x00, 0x00, 0x00, 0x37, 0x00, 0x03, 0x00, 0x0d, 0x00, 0x00, 0x00,
  0x0f, 0x00, 0x00, 0x00, 0x37, 0x00, 0x03, 0x00, 0x0d, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x00, 0x00, 0x37, 0x00, 0x03, 0x00, 0x07, 0x00, 0x00, 0x00,
  0x11, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x02, 0x00, 0x13, 0x00, 0x00, 0x00,
  0x3b, 0x00, 0x04, 0x00, 0x07, 0x00, 0x00, 0x00, 0x26, 0x00, 0x00, 0x00,
  0x07, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x07, 0x00, 0x00, 0x00,
  0x2c, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00,
  0x07, 0x00, 0x00, 0x00, 0x2d, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00,
  0x3d, 0x00, 0x04, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x27, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x0c, 0x00, 0x00, 0x00,
  0x28, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x94, 0x00, 0x05, 0x00,
  0x06, 0x00, 0x00, 0x00, 0x29, 0x00, 0x00, 0x00, 0x27, 0x00, 0x00, 0x00,
  0x28, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x2a, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x81, 0x00, 0x05, 0x00,
  0x06, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x00, 0x00, 0x29, 0x00, 0x00, 0x00,
  0x2a, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0x26, 0x00, 0x00, 0x00,
  0x2b, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x2e, 0x00, 0x00, 0x00, 0x26, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00,
  0x2d, 0x00, 0x00, 0x00, 0x2e, 0x00, 0x00, 0x00, 0x39, 0x00, 0x05, 0x00,
  0x06, 0x00, 0x00, 0x00, 0x2f, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00,
  0x2d, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0x2c, 0x00, 0x00, 0x00,
  0x2f, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x30, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x00, 0xfe, 0x00, 0x02, 0x00,
  0x30, 0x00, 0x00, 0x00, 0x38, 0x00, 0x01, 0x00, 0x36, 0x00, 0x05, 0x00,
  0x06, 0x00, 0x00, 0x00, 0x17, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x14, 0x00, 0x00, 0x00, 0x37, 0x00, 0x03, 0x00, 0x07, 0x00, 0x00, 0x00,
  0x15, 0x00, 0x00, 0x00, 0x37, 0x00, 0x03, 0x00, 0x07, 0x00, 0x00, 0x00,
  0x16, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x02, 0x00, 0x18, 0x00, 0x00, 0x00,
  0x3d, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00, 0x33, 0x00, 0x00, 0x00,
  0x16, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x34, 0x00, 0x00, 0x00, 0x15, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x06, 0x00,
  0x06, 0x00, 0x00, 0x00, 0x35, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x1c, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00, 0x85, 0x00, 0x05, 0x00,
  0x06, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x00, 0x33, 0x00, 0x00, 0x00,
  0x35, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x37, 0x00, 0x00, 0x00, 0x16, 0x00, 0x00, 0x00, 0x83, 0x00, 0x05, 0x00,
  0x06, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00,
  0x37, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x39, 0x00, 0x00, 0x00, 0x15, 0x00, 0x00, 0x00, 0x83, 0x00, 0x05, 0x00,
  0x06, 0x00, 0x00, 0x00, 0x3a, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00,
  0x39, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x06, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x3b, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00,
  0x3a, 0x00, 0x00, 0x00, 0x85, 0x00, 0x05, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x3c, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x00, 0x00,
  0x81, 0x00, 0x05, 0x00, 0x06, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x00, 0x00,
  0x36, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x7f, 0x00, 0x04, 0x00,
  0x06, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x00, 0x00,
  0xfe, 0x00, 0x02, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x38, 0x00, 0x01, 0x00
};
static const unsigned int test_shaders_glsl_test_logistic_regression_comp_spv_len = 4920;
}
}
#endif // define SHADEROP_SHADERTEST_LOGISTIC_REGRESSION_HPP
