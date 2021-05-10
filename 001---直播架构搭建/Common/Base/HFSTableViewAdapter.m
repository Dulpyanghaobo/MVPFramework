//
//  HFSTableViewAdapter.m
//  001---直播架构搭建
//
//  Created by 杨皓博 on 2021/5/10.
//  Copyright © 2021 cooci. All rights reserved.
//

#import "HFSTableViewAdapter.h"

@interface HFSTableViewAdapter ()

@property (nonatomic, strong) NSArray *tableViewArray;

@end

@implementation HFSTableViewAdapter

- (void)hfsAdapterItem:(id)adapterModel {
    self.tableViewArray = [self.delegate configTableViewData:adapterModel];
}

- (nonnull Class)hfs_AdapterClass {
    
    return NSClassFromString(@"HFSTableViewAdapter");
    
}


- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    return self.tableViewArray.count > 0 ? self.tableViewArray.count : 0;
}




//- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
//{
//
//}

@synthesize hfs_IndexPath;

@end
