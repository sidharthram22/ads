#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int u, v, w;
} Edge;

/* ----- Disjoint Set (Union-Find) ----- */
int find(int parent[], int x) {
    if (parent[x] != x)
        parent[x] = find(parent, parent[x]);
    return parent[x];
}

void unite(int parent[], int rank[], int x, int y) {
    x = find(parent, x);
    y = find(parent, y);
    if (x == y) return;

    if (rank[x] < rank[y]) parent[x] = y;
    else if (rank[x] > rank[y]) parent[y] = x;
    else { parent[y] = x; rank[x]++; }
}

/* Compare edges by weight */
int cmp(const void *a, const void *b) {
    return ((Edge*)a)->w - ((Edge*)b)->w;
}

int main() {
    int V, E;
    scanf("%d %d", &V, &E);

    Edge *edges = malloc(E * sizeof(Edge));
    for (int i = 0; i < E; i++)
        scanf("%d %d %d", &edges[i].u, &edges[i].v, &edges[i].w);

    qsort(edges, E, sizeof(Edge), cmp);

    int *parent = malloc(V * sizeof(int));
    int *rank = malloc(V * sizeof(int));
    for (int i = 0; i < V; i++) {
        parent[i] = i;
        rank[i] = 0;
    }

    long long total = 0;
    printf("Edges in MST:\n");

    int used = 0;
    for (int i = 0; i < E && used < V - 1; i++) {
        int u = edges[i].u;
        int v = edges[i].v;

        if (find(parent, u) != find(parent, v)) {
            unite(parent, rank, u, v);
            printf("%d - %d (weight %d)\n", u, v, edges[i].w);
            total += edges[i].w;
            used++;
        }
    }

    if (used != V - 1)
        printf("MST does not exist (graph is disconnected).\n");
    else
        printf("Total weight of MST: %lld\n", total);

    free(edges);
    free(parent);
    free(rank);
    return 0;
}
