graph = {}
graph['start'] = {}
graph['start']['a'] = 6
graph['start']['b'] = 2
# print(graph['start'].keys())
graph['a'] = {}
graph['a']['fin'] = 1
graph['b'] = {}
graph['b']['fin'] = 5
graph['b']['a'] = 3
graph['fin'] = {}

#创建开销表
infinity = float('inf')#无穷大∞
costs = {}
costs['a'] = 6
costs['b'] = 2
costs['fin'] = infinity

#创建 存储父节点的散列表
parents = {}
parents['a'] = 'start'
parents['b'] = 'start'
parents['fin'] = None

def find_lowest_cost_node(costs):
    lowest_cost = float("inf")
    lowest_cost_node = None
    for node in costs:
        cost = costs[node]
        if cost < lowest_cost and node not in processed:
            lowest_cost = cost
            lowest_cost_node = node  
    return lowest_cost_node

processed = []
node = find_lowest_cost_node(costs)
while node is not None:
    cost = costs[node]
    neighbors = graph[node]
    for n in neighbors.keys(): #遍历当前节点的所有邻居
        new_cost = cost + neighbors[n]
        if costs[n] > new_cost: #如股票经当前节点前往该邻居更近
            costs[n] = new_cost #就更新该邻居的开销
            parents[n] = node #同时将该邻居的父节点设为当前节点
    processed.append(node) #将当前节点标记为处理过
    node = find_lowest_cost_node(costs) #找出接下来要处理的节点，并循环

print(costs)
print(parents)