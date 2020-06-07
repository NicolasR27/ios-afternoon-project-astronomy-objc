//
//  NSURL+SecureHttp.m
//  Astronomy
//
//  Created by Nicolas Rios on 6/6/20.
//  Copyright © 2020 Nicolas Rios. All rights reserved.
//

#import "NSURL+SecureHTTP.h"

@implementation NSURL (SecureHTTP)

+ (NSURL *)convertHTTPtoHTTPS:(NSURL *)inputURL {
    NSURLComponents *inputURLComponents = [[NSURLComponents alloc] initWithURL:inputURL resolvingAgainstBaseURL:YES];
    inputURLComponents.scheme = @"https";
    NSURL *newURL = inputURLComponents.URL;
    return newURL;
}

@end
