//
//  ProductListCell.h
//  StorageStarted
//
//  Created by XiaoXu on 2018/7/23.
//  Copyright © 2018年 cuiyiran. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Product.h"
@interface ProductListCell : UITableViewCell

+ (instancetype)cellWithTableView:(UITableView *)tableView;

@property (nonatomic,strong) Product  * product;

@end
