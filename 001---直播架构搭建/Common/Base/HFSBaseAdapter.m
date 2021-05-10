//
//  HFSBaseAdapter.m
//  001---直播架构搭建
//
//  Created by 杨皓博 on 2021/5/10.
//  Copyright © 2021 cooci. All rights reserved.
//

#import "HFSBaseAdapter.h"
#import "HFSBaseAdapterProtocol.h"

@interface HFSBaseAdapter ()<HFSBaseAdapterProtocol>


@property (nonatomic, strong)NSArray <NSObject <HFSBaseAdapterProtocol> *> *adapterArray;

@end

@implementation HFSBaseAdapter

- (void)getAllAdapters:(NSObject<HFSAdapterItemProtocol> *)adapterItems
{
    
}

- (void)sendSignalToTargetAdapterItem:(NSObject<HFSAdapterItemProtocol> *)targetAdapterItem sendAdapterItem:(nonnull NSObject<HFSAdapterItemProtocol> *)sendAdapterItem model:(nonnull id)model
{
    for (NSObject <HFSAdapterItemProtocol> *targetItem in self.adapterArray) {
        if ([targetItem isKindOfClass:[targetAdapterItem hfs_AdapterClass]]) {
            [targetItem receiveMessage:sendAdapterItem model:model];
        }
    }
}
@end
