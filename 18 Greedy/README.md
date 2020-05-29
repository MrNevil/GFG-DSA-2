## Greedy Algorithms: 

Greedy is an __algorithmic paradigm__ that builds up a solution piece by piece, always choosing the next piece that offers the most obvious and immediate benefit. Greedy algorithms are used for optimization problems. An optimization problem can be solved using Greedy if the problem has the following property: 
<br/>
__At every step, we can make a choice that looks best at the moment, and we get the optimal solution of the complete problem.__
<br/>
If a Greedy Algorithm can solve a problem, then it generally becomes the best method to solve that problem as the Greedy algorithms are in general more efficient than other techniques like Dynamic Programming. 
But Greedy algorithms cannot always be applied. For example, Fractional Knapsack problem (See [this](http://www.cs.binghamton.edu/~dima/cs333/knapsack.ppt)) can be solved using Greedy,
but [0-1 Knapsack](https://www.geeksforgeeks.org/0-1-knapsack-problem-dp-10/) cannot be solved using Greedy.
<br/><br/>
Following are some standard algorithms that are Greedy algorithms.
1) __[Kruskal's Minimum Spanning Tree (MST)](https://www.geeksforgeeks.org/kruskals-minimum-spanning-tree-algorithm-greedy-algo-2/):__ In Kruskal's algorithm, we create a MST by picking edges one by one. The Greedy Choice is to pick the smallest weight edge that doesn't cause a cycle in the MST constructed so far.<br/>
2) __[Prim's Minimum Spanning Tree](https://www.geeksforgeeks.org/prims-algorithm-using-priority_queue-stl/):__ In Prim's algorithm also, we create a MST by picking edges one by one. We maintain two sets: a set of the vertices already included in MST and the set of the vertices not yet included. The Greedy Choice is to pick the smallest weight edge that connects the two sets.<br/>
3) __[Dijkstra's Shortest Path](https://www.geeksforgeeks.org/dijkstras-shortest-path-algorithm-greedy-algo-7/):__ The Dijkstra's algorithm is very similar to Prim's algorithm. The shortest path tree is built up, edge by edge. We maintain two sets: a set of the vertices already included in the tree and the set of the vertices not yet included. The Greedy Choice is to pick the edge that connects the two sets and is on the smallest weight path from source to the set that contains not yet included vertices.<br/>
4) __[Huffman Coding](https://www.geeksforgeeks.org/huffman-coding-greedy-algo-3/):__ Huffman Coding is a loss-less compression technique. It assigns variable-length bit codes to different characters. The Greedy Choice is to assign least bit length code to the most frequent character.<br/>

The greedy algorithms are sometimes also used to get an approximation for Hard optimization problems. For example, Traveling Salesman Problem is a NP-Hard problem. A Greedy choice for this problem is to pick the nearest unvisited city from the current city at every step. This solutions don't always produce the best optimal solution but can be used to get an approximately optimal solution.
