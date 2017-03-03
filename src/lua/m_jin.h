/**
* Copyright (C) 2016~2017 chai(neonum)
* 
* Permission is hereby granted, free of charge, to any person obtaining a copyof
* this software and associated documentation files (the "Software"), to deal in
* the Software without restriction, including without limitation the rights to use,
* copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the
* Software, and to permit persons to whom the Software is furnished to do so,
* subject to the following conditions:
* 
* The above copyright notice and this permission notice shall be included in all
* copies or substantial portions of the Software.
* 
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,
* INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A
* PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
* HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
* OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
* SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

#ifndef __JIN_M_JIN_H
#define __JIN_M_JIN_H
#include "libs/luax/luax.h"

#define MODULE_NAME "jin"
#define VERSION     "0.1.0"
#define AUTHOR      "chai(neonum)"

namespace jin
{
namespace module
{

    /**
    * open jin lib and boot 
    */
    int luaopen_jin(lua_State* L);

    void boot(lua_State* L);

}
}

#endif