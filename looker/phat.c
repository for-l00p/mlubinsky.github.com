#--------------------------------
# -- 12 % devices active on TRC
#--------------------------------
if(row()=12,
 (
   index(${derived_trc_amoeba_kpi.devices_on_trc},1)
   /
   index(${derived_trc_amoeba_kpi.allocated_devices} ,1)
 )
   -
 (
   pivot_where(contains(${derived_trc_amoeba_kpi.bucket}, "#Control"),
    index(${derived_trc_amoeba_kpi.devices_on_trc},1))
    /
    index(${derived_trc_amoeba_kpi.allocated_devices},1)
 )
/
sqrt(
   222 * (1 - pivot_where(contains(${derived_trc_amoeba_kpi.bucket}, "#Control"), 222) )
    *
   (
    (1.0 / index(${derived_trc_amoeba_kpi.devices_on_trc},1)) +
     1.0/ pivot_where(contains(${derived_trc_amoeba_kpi.bucket}, "#Control"),
          index(${derived_trc_amoeba_kpi.devices_on_trc},1))
   )
),
null),
#--------------------------------
# -- 13 % Avg Total Hours
#--------------------------------
if(row()=13,
 (
   index(${derived_trc_amoeba_kpi.Avg_Total_hours},1)
   /
   index(${derived_trc_amoeba_kpi.allocated_devices} ,1)
 )
   -
 (
   pivot_where(contains(${derived_trc_amoeba_kpi.bucket}, "#Control"),
    index(${derived_trc_amoeba_kpi.Avg_Total_hours},1))
    /
    index(${derived_trc_amoeba_kpi.allocated_devices},1)
 )
/
sqrt(
   222 * (1 - pivot_where(contains(${derived_trc_amoeba_kpi.bucket}, "#Control"), 222) )
    *
   (
    (1.0 / index(${derived_trc_amoeba_kpi.Avg_Total_hours},1)) +
     1.0/ pivot_where(contains(${derived_trc_amoeba_kpi.bucket}, "#Control"),
          index(${derived_trc_amoeba_kpi.Avg_Total_hours},1))
   )
),
null),
#--------------------------------
# -- 14 % Avg AVOD Hours
#--------------------------------
if(row()=14,
 (
   index(${derived_trc_amoeba_kpi.Avg_AVOD_hours},1)
   /
   index(${derived_trc_amoeba_kpi.allocated_devices} ,1)
 )
   -
 (
   pivot_where(contains(${derived_trc_amoeba_kpi.bucket}, "#Control"),
    index(${derived_trc_amoeba_kpi.Avg_AVOD_hours},1))
    /
    index(${derived_trc_amoeba_kpi.allocated_devices},1)
 )
/
sqrt(
   222 * (1 - pivot_where(contains(${derived_trc_amoeba_kpi.bucket}, "#Control"), 222) )
    *
   (
    (1.0 / index(${derived_trc_amoeba_kpi.Avg_AVOD_hours},1)) +
     1.0/ pivot_where(contains(${derived_trc_amoeba_kpi.bucket}, "#Control"),
          index(${derived_trc_amoeba_kpi.Avg_AVOD_hours},1))
   )
),
null),

#--------------------------------
# -- 15 % Avg_AVOD_movies_hours
#--------------------------------
if(row()=15,
 (
   index(${derived_trc_amoeba_kpi.Avg_AVOD_movies_hours},1)
   /
   index(${derived_trc_amoeba_kpi.allocated_devices} ,1)
 )
   -
 (
   pivot_where(contains(${derived_trc_amoeba_kpi.bucket}, "#Control"),
    index(${derived_trc_amoeba_kpi.Avg_AVOD_movies_hours},1))
    /
    index(${derived_trc_amoeba_kpi.allocated_devices},1)
 )
/
sqrt(
   222 * (1 - pivot_where(contains(${derived_trc_amoeba_kpi.bucket}, "#Control"), 222) )
    *
   (
    (1.0 / index(${derived_trc_amoeba_kpi.Avg_AVOD_movies_hours},1)) +
     1.0/ pivot_where(contains(${derived_trc_amoeba_kpi.bucket}, "#Control"),
          index(${derived_trc_amoeba_kpi.Avg_AVOD_movies_hours},1))
   )
),
null),

#--------------------------------
# -- 16 % Avg_AVOD_series_hours
#--------------------------------
if(row()=16,
 (
   index(${derived_trc_amoeba_kpi.Avg_AVOD_series_hours},1)
   /
   index(${derived_trc_amoeba_kpi.allocated_devices} ,1)
 )
   -
 (
   pivot_where(contains(${derived_trc_amoeba_kpi.bucket}, "#Control"),
    index(${derived_trc_amoeba_kpi.Avg_AVOD_series_hours},1))
    /
    index(${derived_trc_amoeba_kpi.allocated_devices},1)
 )
/
sqrt(
   222 * (1 - pivot_where(contains(${derived_trc_amoeba_kpi.bucket}, "#Control"), 222) )
    *
   (
    (1.0 / index(${derived_trc_amoeba_kpi.Avg_AVOD_series_hours},1)) +
     1.0/ pivot_where(contains(${derived_trc_amoeba_kpi.bucket}, "#Control"),
          index(${derived_trc_amoeba_kpi.Avg_AVOD_series_hours},1))
   )
),
null),

#--------------------------------
# -- 17 % Avg_SVOD_hours
#--------------------------------
if(row()=17,
 (
   index(${derived_trc_amoeba_kpi.Avg_SVOD_hours},1)
   /
   index(${derived_trc_amoeba_kpi.allocated_devices} ,1)
 )
   -
 (
   pivot_where(contains(${derived_trc_amoeba_kpi.bucket}, "#Control"),
    index(${derived_trc_amoeba_kpi.Avg_SVOD_hours},1))
    /
    index(${derived_trc_amoeba_kpi.allocated_devices},1)
 )
/
sqrt(
   222 * (1 - pivot_where(contains(${derived_trc_amoeba_kpi.bucket}, "#Control"), 222) )
    *
   (
    (1.0 / index(${derived_trc_amoeba_kpi.Avg_SVOD_hours},1)) +
     1.0/ pivot_where(contains(${derived_trc_amoeba_kpi.bucket}, "#Control"),
          index(${derived_trc_amoeba_kpi.Avg_SVOD_hours},1))
   )
),
null),

#--------------------------------
# -- 18 % Avg_SVOD_movies_hours
#--------------------------------
if(row()=18,
 (
   index(${derived_trc_amoeba_kpi.Avg_SVOD_movies_hours},1)
   /
   index(${derived_trc_amoeba_kpi.allocated_devices} ,1)
 )
   -
 (
   pivot_where(contains(${derived_trc_amoeba_kpi.bucket}, "#Control"),
    index(${derived_trc_amoeba_kpi.Avg_SVOD_movies_hours},1))
    /
    index(${derived_trc_amoeba_kpi.allocated_devices},1)
 )
/
sqrt(
   222 * (1 - pivot_where(contains(${derived_trc_amoeba_kpi.bucket}, "#Control"), 222) )
    *
   (
    (1.0 / index(${derived_trc_amoeba_kpi.Avg_SVOD_movies_hours},1)) +
     1.0/ pivot_where(contains(${derived_trc_amoeba_kpi.bucket}, "#Control"),
          index(${derived_trc_amoeba_kpi.Avg_SVOD_movies_hours},1))
   )
),
null),

#--------------------------------
# -- 19 % Avg_SVOD_series_hours
#--------------------------------
if(row()=19,
 (
   index(${derived_trc_amoeba_kpi.Avg_SVOD_series_hours},1)
   /
   index(${derived_trc_amoeba_kpi.allocated_devices} ,1)
 )
   -
 (
   pivot_where(contains(${derived_trc_amoeba_kpi.bucket}, "#Control"),
    index(${derived_trc_amoeba_kpi.Avg_SVOD_series_hours},1))
    /
    index(${derived_trc_amoeba_kpi.allocated_devices},1)
 )
/
sqrt(
   222 * (1 - pivot_where(contains(${derived_trc_amoeba_kpi.bucket}, "#Control"), 222) )
    *
   (
    (1.0 / index(${derived_trc_amoeba_kpi.Avg_SVOD_series_hours},1)) +
     1.0/ pivot_where(contains(${derived_trc_amoeba_kpi.bucket}, "#Control"),
          index(${derived_trc_amoeba_kpi.Avg_SVOD_series_hours},1))
   )
),
null),

#--------------------------------
# -- 20 % Avg_Livefeed_hours
#--------------------------------
if(row()=20,
 (
   index(${derived_trc_amoeba_kpi.Avg_Livefeed_hours},1)
   /
   index(${derived_trc_amoeba_kpi.allocated_devices} ,1)
 )
   -
 (
   pivot_where(contains(${derived_trc_amoeba_kpi.bucket}, "#Control"),
    index(${derived_trc_amoeba_kpi.Avg_Livefeed_hours},1))
    /
    index(${derived_trc_amoeba_kpi.allocated_devices},1)
 )
/
sqrt(
   222 * (1 - pivot_where(contains(${derived_trc_amoeba_kpi.bucket}, "#Control"), 222) )
    *
   (
    (1.0 / index(${derived_trc_amoeba_kpi.Avg_Livefeed_hours},1)) +
     1.0/ pivot_where(contains(${derived_trc_amoeba_kpi.bucket}, "#Control"),
          index(${derived_trc_amoeba_kpi.Avg_Livefeed_hours},1))
   )
),
null),

#--------------------------------
# -- 21 % Avg_Kids_hours
#--------------------------------
if(row()=21,
 (
   index(${derived_trc_amoeba_kpi.Avg_Kids_hours},1)
   /
   index(${derived_trc_amoeba_kpi.allocated_devices} ,1)
 )
   -
 (
   pivot_where(contains(${derived_trc_amoeba_kpi.bucket}, "#Control"),
    index(${derived_trc_amoeba_kpi.Avg_Kids_hours},1))
    /
    index(${derived_trc_amoeba_kpi.allocated_devices},1)
 )
/
sqrt(
   222 * (1 - pivot_where(contains(${derived_trc_amoeba_kpi.bucket}, "#Control"), 222) )
    *
   (
    (1.0 / index(${derived_trc_amoeba_kpi.Avg_Kids_hours},1)) +
     1.0/ pivot_where(contains(${derived_trc_amoeba_kpi.bucket}, "#Control"),
          index(${derived_trc_amoeba_kpi.Avg_Kids_hours},1))
   )
),
null),