#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int adj[MAX][MAX];
int visited[MAX];
int queue[MAX];
int front = -1, rear = -1;

void bfs(int start, int n) {
    int i, j;
    visited[start] = 1;
    queue[++rear] = start;

    while (front != rear) {
        i = queue[++front];
        for (j = 0; j < n; j++) {
            if (adj[i][j] == 1 && visited[j] == 0) {
                visited[j] = 1;
                queue[++rear] = j;
            }
        }
        printf("%d ", i);
    }
}

int main() {
    int n, i, j, start;
    printf("Enter the number of vertices: ");
    scanf("%d", &n);
    printf("Enter adjacency matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &adj[i][j]);
        }
    }
    printf("Enter starting vertex: ");
    scanf("%d", &start);
    printf("BFS Traversal: ");
    bfs(start, n);
    return 0;
}