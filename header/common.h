//
// Created by god on 2021/12/25.
//

#ifndef TRAFFIC_INFORMATION_SYSTEM_COMMON_H
#define TRAFFIC_INFORMATION_SYSTEM_COMMON_H

#define N 10000
#include <gtk/gtk.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum{
    COLUMN_DEPARTURE,
    COLUMN_DESTINATION,
    COLUMN_CLASSID,
    COLUMN_DEPARTTIME,
    COLUMN_ARRIVE_TIME,
    COLUMN_COST_TIME,
    COLUMN_PRICE,
    N_COLUMNS
};
typedef struct {
    double x;
    double y;
    char name[30];
}City;
typedef struct {
    char departure[30];//出发
    char destination[30];//到达
    char classId[30];//班次
    char departTime[30];//出发时间
    char arriveTime[30];//到达时间
    double costTime;//用时
    double price;//票价
}Flight;
typedef struct {
    char departure[30];//出发
    char destination[30];//到达
    char classId[30];//班次
    char departTime[30];//出发时间
    char arriveTime[30];//到达时间
    double costTime;//用时
    double price;//票价
}Train;
typedef struct {
    City *cities[30];
    int cityNum;
}CityInfo;
typedef struct {
    Flight *flights[30];
    int flightNum;
}FlightInfo;
typedef struct {
    Train *train[30];
    int trainNum;
}TrainInfo;

CityInfo *cityData;
FlightInfo *flightData;
TrainInfo *trainData;

GdkPixbuf *create_pixbuf(const gchar *filename);

void on_return_button_clicked(GtkWidget *button, gpointer window);
int transform_time_to_double(char *time);
#endif //TRAFFIC_INFORMATION_SYSTEM_COMMON_H
