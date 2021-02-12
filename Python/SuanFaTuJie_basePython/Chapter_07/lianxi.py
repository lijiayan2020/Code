#7.1 在下面的各个图中，从起点到终点的最短路径的总权重分别是多少？

#A
infinity = float("inf")
graph = {}
graph["start"] = {}
graph["start"]["a"] = 5
graph["start"]["b"] = 2
graph["start"]["c"] = infinity
graph["start"]["d"] = infinity
graph["start"]["fin"] = infinity

graph["a"] ={}
graph["a"]["c"] = 2
graph["a"]["d"] = 4

graph["b"] ={}
graph["b"]["c"] = 7
graph["b"]["a"] = 8

graph["c"] ={}
graph["c"]["fin"] = 1

graph["d"] ={}
graph["d"]["c"] = 6
graph["d"]["fin"] = 3
graph["fin"] = {}

costs = {}
costs["a"] = 5
costs["b"] = 2
costs["c"] = infinity
costs["d"] = infinity
costs["fin"] = infinity

parents = {}
parents["a"] = "start"
parents["b"] = "start" 
parents["c"] = None
parents["d"] = None
parents["fin"] = None

processed = []     

def find_lowest_cost_node(costs):
    lowest_cost = infinity
    lowest_cost_node = None
    for node in costs:
        cost = costs[node]
        if lowest_cost > cost and node not in processed:
            lowest_cost = cost
            lowest_cost_node = node
    return lowest_cost_node
# processed = []            #必须放在这里？，当然不是！！！
node =  find_lowest_cost_node(costs)            
while node is not None:
    cost = costs[node]
    neighbors = graph[node]
    for n in neighbors.keys():
        new_cost = cost + neighbors[n]
        if new_cost < costs[n]:
            costs[n] = new_cost
            parents[n] = node
    processed.append(node)
    node = find_lowest_cost_node(costs)
    
print(costs)
print(parents)
        

#B - 6
#c - 6
