//
//  FabricTwitterKit.h
//  FabricTwitterKit
//
//  Created by Garrett Mac on 6/20/17.
//  Copyright © 2016 Garrett Mac. All rights reserved.
//

#import <React/RCTBridgeModule.h>

@interface FabricTwitterKit : NSObject <RCTBridgeModule> {
    RCTResponseSenderBlock _callback;
}

@end
