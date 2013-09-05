//
//  ChocolateAppDelegate.h
//  coredata
//
//  Created by Chocolate on 12-11-5.
//  Copyright (c) 2012年 Chocolate. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ChocolateAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
