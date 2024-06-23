 ## My Competitve Programming ` C++ Templates ` setup - OSX

<div align="center">
  <img src="https://user-images.githubusercontent.com/74103314/211152845-5c4f82d9-d044-4f76-80a1-f276cb7aad65.gif" width="700" height="400"/>
</div>


### C++ `templates` file links : 

These are my some *templates(sublime supported)* : 
### Basics
- [main()](./akhilsharmaa.sublime-snippet) - **main()** function, #defines, constants(MOD, N, INF) etc. 
- [Pow(n, k)](./binpow.sublime-snippet) - find `n^k` in O(log n) with MOD
- [Combinatorics](./combinatorics-arithmetic.sublime-snippet) - includes  **nCr(n,r),  nPr(n, r), inv(), divide(), factorial()...**
- [factorial()](./factorial.sublime-snippet) - initilize globally **(N!)** `int fact[N];`for accessing factorial of num. 
- [isPrime()](./isPrime-sieveofE.sublime-snippet) - initilize globally  `int isPrime[N];`for accessing `N` is prime or non-prime. using the *sieve of eratosthenes*. 
- [prefixSum()](./prefixSum.sublime-snippet) - returns `vector<int>` of prefix of the vector array.
- [2DmatrixPrefixSum()](./matrixPrefixSum.sublime-snippet) - Build the prefix sum 2D matrix (size of matrix = (n+1) x (m+1))

### Intermediate 
- [dfs()](./dfs.sublime-snippet) - Graph **Depth** first search algorithm template
- [Dijkstra()](./DijkstraAlgo.sublime-snippet) - Shortest Path Algorithm using **priority_queue** of STL 
- [isBipartiteDFS()](./isBipartite-DFS.sublime-snippet) - Check whether the graph can divided into bipartite graph 
- [SegmentTree()](./SegmentTree.sublime-snippet) - implementation of segment tree data-structure 
- [SparseTable()](./SparseTable.sublime-snippet) - implementation of Sparse Table (minQuery) data-structure 

( I suggest to take references from this and **try to create your own template** it will take time but worth it. )

### Auto completition file [cpp.sublime-completions](https://github.com/akhilsharmaa/Competitive-Programming-SETUP/blob/main/cpp.sublime-completions)
Move this file at: ```/Sublime Text/Packages/User/cpp.sublime-completions``` Add your own auto-completion snippets. *Easy to add :)*
