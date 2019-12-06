// The MIT License (MIT)
//
// Copyright (c) 2015 Ivan Lisovyi
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXPORT NSString * const LKValidatorErrorDomain;

typedef NS_ENUM(NSInteger, LKValidatorErrorCode) {
    LKValidatorUnknownErrorCode = 1000,
    LKValidatorNumericErrorCode = 1001,
    LKValidatorAlphaErrorCode = 1002,
    LKValidatorEmailErrorCode = 1003,
    LKValidatorRequiredErrorCode = 1004,
    LKValidatorLengthErrorCode = 1005,
    LKValidatorRegexErrorCode = 1006,
    LKValidatorMultipleErrorCode = 1100
};

@interface NSError (LKValidatorErrorDomain)

+ (instancetype)unknownValidationError;
+ (instancetype)numericValidationError;
+ (instancetype)alphaValidationError;
+ (instancetype)emailValidationError;
+ (instancetype)requiredValidationError;
+ (instancetype)lengthValidationError;
+ (instancetype)regexValidationError;

+ (instancetype)multipleValidationError;
+ (instancetype)multipleValidationErrorWithErrors:(NSArray<NSError *> *)errors;

+ (instancetype)errorWithCode:(LKValidatorErrorCode)code;
+ (instancetype)errorWithCode:(LKValidatorErrorCode)code reason:(nullable NSString *)reason;

@end

NS_ASSUME_NONNULL_END
