
from collections import deque

graph = {}
graph["you"] = ["alice", "bob", "claire"]
graph["bob"] = ["cherry", "peggy"]
graph["alice"] = ["peggy"]
graph["claire"] = ["deng", "john"]
graph["cherry"] = []
graph["peggy"] = []
graph["deng"] = []
graph["john"] = []




def person_is_bad(name):
    return name[-1] == 'g' #指的是我朋友的朋友是个坏人

#防止死循环
def search(name):
    search_queue = deque()
    search_queue += graph[name]
    searched = []
    while search_queue:
        person = search_queue.popleft()
        if person not in searched:
            if person_is_bad(person):
                print(person  + " is a bad woman！")
                return True
            else:
                search_queue += graph[person]
                searched.append(person)
    return False
search("you")

#一下来自官方
'''

from collections import deque

graph = {}
graph["you"] = ["alice", "bob", "claire"]
graph["bob"] = ["anuj", "peggy"]
graph["alice"] = ["peggy"]
graph["claire"] = ["thom", "jonny"]
graph["anuj"] = []
graph["peggy"] = []
graph["thom"] = []
graph["jonny"] = []

def search(name) :
    search_queue = deque()
    search_queue += graph[name]
    searched = []
    while search_queue :
        person = search_queue.popleft()
        if person not in searched :
            if person_is_seller(person) :
                print("Person " + person +" is a mango seller")
                return True
            else :
                search_queue += graph[person]
                searched.append(person)
    return False


def person_is_seller(name) :
    return name[-1] == 'm'

search('you')
'''