//
//  ChocolateMasterViewController.h
//  coredata
//
//  Created by Chocolate on 12-11-5.
//  Copyright (c) 2012年 Chocolate. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface ChocolateMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
