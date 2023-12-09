# Network Delay Time

You are given a network of n nodes, labeled from 1 to n. You are also given times, a list of travel times as directed edges times[i] = (ui, vi, wi), where ui is the source node, vi is the target node, and wi is the time it takes for a signal to travel from source to target.

We will send a signal from a given node k. Return the minimum time it takes for all the n nodes to receive the signal. If it is impossible for all the n nodes to receive the signal, return -1.

 ## Example 1:

 ![image](https://github.com/projeto-de-algoritmos/PD_EXERCICIOS_/assets/78215376/b4c2be55-ea89-4292-9c1d-e9cc55f78894)

Input: times = [[2,1,1],[2,3,1],[3,4,1]], n = 4, k = 2
Output: 2


## Example 2:
Input: times = [[1,2,1]], n = 2, k = 1
Output: 1

## Example 3:
Input: times = [[1,2,1]], n = 2, k = 2
Output: -1
