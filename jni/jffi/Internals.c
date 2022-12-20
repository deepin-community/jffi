/* 
 * Copyright (C) 2010 Wayne Meissner
 * 
 * This file is part of jffi.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * 
 * Alternatively, you can redistribute it and/or modify it under
 * the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This code is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License
 * for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this work.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <stdlib.h>
#include <jni.h>
#include "Exception.h"
#include "com_kenai_jffi_Foreign.h"
#include "LastError.h"
#include "CallContext.h"
#include "jffi.h"

/*
 * Class:     com_kenai_jffi_Foreign
 * Method:    getSaveErrnoFunction
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL
Java_com_kenai_jffi_Foreign_getSaveErrnoFunction(JNIEnv *env, jobject self)
{
    return p2j(jffi_save_errno);
}

/*
 * Class:     com_kenai_jffi_Foreign
 * Method:    getSaveErrnoFunction
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL
Java_com_kenai_jffi_Foreign_getSaveErrnoCtxFunction(JNIEnv *env, jobject self)
{
    return p2j(jffi_save_errno_ctx);
}