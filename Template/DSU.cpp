/* union by size */
struct DSU {
  
  vector<int> lst[N];
  int parent[N];

  void init(int v) {
      lst[v] = vector<int>(1, v);
      parent[v] = v;
  }

  int find_set(int v) {
      return parent[v];
  }

  void merge(int a, int b) {
      a = find_set(a);
      b = find_set(b);
      if (a != b) {
          if (lst[a].size() < lst[b].size())
              swap(a, b);
          while (!lst[b].empty()) {
              int v = lst[b].back();
              lst[b].pop_back();
              parent[v] = a;
              lst[a].push_back (v);
          }
      }
  }

  int find(int n) { return parent[n]; }
};
