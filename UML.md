# UML class sketch

```text
+--------------------+        +--------------------+
|      Journey       |------->|      Zone          |
+--------------------+        +--------------------+
| zone: Zone         |        | Inner              |
| hour: int          |        | Middle             |
| weekend: bool      |        | Outer              |
+--------------------+        | Airport (Task 12)  |
                              +--------------------+
          | uses
          v
+--------------------+        +--------------------+
|     FareTable      |        |     SmartCard      |
+--------------------+        +--------------------+
| fares: paise[]     |        | - balance_: long   |
| surcharge: int     |        +--------------------+
+--------------------+        | +canTravel(fare)   |
| +calculateFare()   |        | +deduct(fare)      |
+--------------------+        | +balance()         |
                              +--------------------+
                                      ^
                                      | works with
                              +--------------------+
                              |        Pass        |
                              +--------------------+
                              | coveredZones: bool[]|
                              | +covers(zone)      |
                              +--------------------+
```

The sketch captures the main relationships in the implementation: a journey supplies zone/time facts, FareTable calculates a charge, SmartCard protects and updates its balance, and Task 12's Pass identifies zones with unlimited covered travel.
