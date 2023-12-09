from typing import List

class Solution:
    def networkDelayTime(self, times: List[List[int]], n: int, k: int) -> int:
        # Initialize distance array with a large integer value
        MAX_INT = 10**9
        distance = [MAX_INT] * (n + 1)
        distance[k] = 0  # Distance from source node to itself is 0

        # Relax edges for (n-1) iterations
        for _ in range(n - 1):
            for u, v, w in times:
                if distance[u] + w < distance[v]:
                    distance[v] = distance[u] + w

        # Check for negative cycles
        for u, v, w in times:
            if distance[u] + w < distance[v]:
                return -1  # Negative cycle exists

        # Return the maximum time taken to reach each node, if possible
        result = max(distance[1:])
        return result if result < MAX_INT else -1
