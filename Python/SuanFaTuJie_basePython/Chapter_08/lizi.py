states_needed = set(["mt", "wa", "or", "id", "nv", "ut", "ca", "az"]) #set()--将数组变为集合
stations = {}
stations["kone"] = set(["id", "nv", "ut"])
stations["ktwo"] = set(["wa", "id", "mt"])
stations["kthree"] = set(["or", "nv", "ca"])
stations["kfour"] = set(["nv", "ut"])
stations["kfive"] = set(["ca", "az"])

final_stations = set() #使用集合存储最终选择的广播台
while states_needed:
    best_station = None #覆盖最多未覆盖州的广播台
    states_covered = set() #最佳选择best_station下未覆盖的州
    for station, states_for_station in stations.items():
        covered = states_needed & states_for_station #交集
        if len(covered) > len(states_covered):
            best_station = station
            states_covered = covered
            states_needed -= states_covered
            final_stations.add(best_station)

print(final_stations)
