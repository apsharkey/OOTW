//
//  OWSpaceDataViewController.h
//  Out of this World
//
//  Created by Andy Sharkey on 9/18/14.
//  Copyright (c) 2014 Andy Sharkey. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OWSpaceObject.h"

@interface OWSpaceDataViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (strong, nonatomic) IBOutlet UITableView *tableView;
@property (strong, nonatomic) OWSpaceObject *spaceObject;

@end
