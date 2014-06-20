//
//  ViewController.h
//  Geekon-SocialMap
//
//  Created by Wenxu Li on 6/16/14.
//  Copyright (c) 2014 OrdersTeam1. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>
#import <CoreLocation/CoreLocation.h>
#import "CJSONDeserializer.h"

@interface ViewController : UIViewController <UITextFieldDelegate, MKMapViewDelegate, CLLocationManagerDelegate, UITableViewDelegate, UITableViewDataSource>

{
    CLLocationManager *locationManager;
    UIAlertView *statusAlert;
}


-(void)loadDummyPlaces;
-(float)RandomFloatStart:(float)a end:(float)b;
-(void)filterAnnotations:(NSArray *)placesToFilter;

@property (weak, nonatomic) IBOutlet UITableView *textView;
@property (weak, nonatomic) IBOutlet MKMapView *mapView;
@property (weak, nonatomic) IBOutlet UIButton *centerOnUserLocation;

@property (weak, nonatomic) IBOutlet UIButton *searchButtonForAll;
@property (weak, nonatomic) IBOutlet UIButton *searchButtonForFood;
@property (weak, nonatomic) IBOutlet UIButton *searchButtonForEvents;
@property (weak, nonatomic) IBOutlet UIButton *searchButtonForDeals;

@property (weak, nonatomic) IBOutlet UISearchBar *postBar;

@end