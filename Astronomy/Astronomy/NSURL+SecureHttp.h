//
//  NSURL+SecureHttp.h
//  Astronomy
//
//  Created by Nicolas Rios on 6/6/20.
//  Copyright © 2020 Nicolas Rios. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSURL (SecureHTTP)

+ (NSURL *)convertHTTPtoHTTPS:(NSURL *)inputURL;

@end

NS_ASSUME_NONNULL_END
