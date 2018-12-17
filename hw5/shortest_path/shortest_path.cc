// Maayez Imam & Abdullah Mohammed

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <cstring>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>
#include <list>
#include <queue>

#include "index_min_pq.h"

class Graph {
 public:
  explicit Graph(int V);
  explicit Graph(std::ifstream &ifs);
  void AddEdge(int v, int w);
  std::vector<int> Adj(int v);
  int V();
  int E();
  int Djikstra(Graph G, int src, int dst);

 private:
  std::vector<std::pair<int, int>> edges;
  int nv;
  int *dist;
  int *prev;
  // int dist[];
  // int prev[];
};

Graph::Graph(int V) : nv(V) {}

Graph::Graph(std::ifstream &ifs) {
  ifs >> nv;
  int v;
  int w;
  while (ifs >> v >> w) {
    AddEdge(v, w);
  }
}

void Graph::AddEdge(int v, int w) {
  edges.emplace_back(std::make_pair(v, w));
}

std::vector<int> Graph::Adj(int v) {
  std::vector<int> v_edges;

  for (auto &e : edges) {
    if (e.first == v) {
      v_edges.push_back(e.second);
    } else if (e.second == v) {
      v_edges.push_back(e.first);
    }
  }
  return v_edges;
}

int Graph::V() { return nv; }
int Graph::E() { return edges.size(); }

int main(int argc, char* argv[]) {
  if (argc != 4) {
    std::cerr << "Usage: " << argv[0] << " <graph.dat> src dst\n";
    exit(1);
  }

  std::ifstream graph_file;
  graph_file.open(argv[1]);
  if (!graph_file.is_open()) {
    std::cerr << "Error: cannot open file " << argv[1] << std::endl;
    exit(1);
  }

  int num_vertices;
  graph_file >> num_vertices;
  if (!graph_file >> num_vertices) {
    std::cerr << "Error: invalid graph size\n";
    exit(1);
  }
  std::vector<int> source;
  int src;
  std::vector<int> destination;
  int dst;
  std::vector<double> weight;
  double w;
  while (graph_file >> src >> dst >> w) {
    source.push_back(src);
    destination.push_back(dst);
    weight.push_back(w);
  }
  graph_file.close();

  if ((std::atoi(argv[2]) < 0) || std::atoi(argv[2]) > num_vertices - 1) {
    std::cerr << "Error: invalid source vertex number " << argv[2];
    exit(1);
  }

  if ((std::atoi(argv[2]) < 0) || std::atoi(argv[3]) > num_vertices - 1) {
    std::cerr << "Error: invalid dest vertex number " << argv[3];
    exit(1);
  }

  for (unsigned int i = 0; i < source.size(); i++) {
    if (source[i] > num_vertices - 1) {
      std::cerr << "Invalid source vertex number " << source[i] << std::endl;
      exit(1);
    }
  }

  for (unsigned int i = 0; i < destination.size(); i++) {
    if (destination[i] > num_vertices - 1) {
      std::cerr << "Invalid dest vertex number " << destination[i] << std::endl;
      exit(1);
    }
  }

  for (unsigned int j = 0;  j < weight.size(); j++) {
    if (weight[j] < 0) {
      std::cerr << "Invalid weight " << weight[j] << std::endl;
      exit(1);
    }
  }

  Graph g(num_vertices);

  // std::cout << g.Djikstra(g, src, dst);

  std::cout << argv[2] << " to " << argv[3] << ": ";

  if (source.empty()) {
    std:: cout << "no path" << std::endl;
    exit(0);
  }

  exit(1);
}

int Graph::Djikstra(Graph G, int src, int dst) {
  IndexMinPQ<int> Q(nv);

  for (int v = 0; v < V(); v++) {
    dist[v] = INT8_MAX;
    prev[v] = 0;
  }

  dist[src] = 0;

  Q.Push(src, dist[src]);

  while (Q.Size() != 0) {
    int  u = Q.Top(); Q.Pop();
    if (u == dst) {
      break;
    }
    for (int i = Adj(u).front(); i != Adj(u).back(); i++) {
      int alt = dist[u] + E();
      if (alt < dist[i]) {
        dist[i] = alt;
        prev[i] = u;
        if (Q.Contains(i)) {
          Q.ChangeKey(i, dist[i]);
        } else {
          Q.ChangeKey(i, dist[i]);
        }
      }
    }
  }
  std::vector<int> S;
  int u = dst;
  if (!isinff(dist[u])) {
    while (u) {
      S.insert(S.begin(), u);
      u = prev[u];
    }
  }
  return dist[dst];
}


/*
function Dijkstra(G, src, dst):
  create min-priority queue Q

  for each vertex v in G:
    dist[v] = INFINITY                  # Unknown distance from src to v
    prev[v] = UNDEFINED                 # Predecessor of v in path

  dist[src] = 0                           # Distance from src to itself is 0

  Q.add_with_priority(src, dist[src])     # Add first vertex to queue

  while Q is not empty:                   # The main loop
    u = Q.extract_min()                 # Remove and return closest vertex
    if u == dst:                        # Reached destination
      break loop
    for each neighbor v of u:           # Go through all the neighbors
      alt = dist[u] + length(u, v)    # Compute alternate path that goes through u
      if alt < dist[v]:               # Alternate path is better than existing one
        dist[v] = alt               # Update distance from src to v
        prev[v] = u                 # Update predecessor of v in path
        if Q.Contains(v):           # Update priority queue
           Q.change_priority(v, dist[v])
        else
           Q.add_with_priority(v, dist[v])


# Backtrack to find the shortest path between src and dst, if any
  S = empty sequence
  u = dst
  if dist[u] is not INFINITY:             # Do something only if the vertex is reachable
    while u is defined:                 # Construct the shortest path in S
      insert u at the beginning of S  # Insert the vertex into S
      u = prev[u]                     # Traverse from destination to source

  return S, dist[dst]                     # Shortest path from src to dst, and its total weight*/
