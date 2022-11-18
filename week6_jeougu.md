## Branch-and-Bound는 앞서 배운 Backtracking을 개선한 알고리즘이다. 이 두 알고리즘의 차이점은 트리 탐색 방법에 제한을 두지 않고, 오로지 최적화 문제에만 사용한다는 것이다.

## Backtracking에서는 트리를 탐색 할 때 dfs를 사용하였다. 하지만 Branch-and-Bound 알고리즘은 bfs를 사용하여 더 효율적으로 탐색을 한다. 

## Branch-and-Bound알고리즘은 각 노드를 방문 할 때 마다, 그 노드가 유망한지를 판단하기 위해 한계치(Bound)를 계산한다. 한계치는 그 노드로부터 가지를 뻗어 나가서 얻을 수 있는 해답치의 한계를 의미한다. 
## 한계치가 이전까지 찾은 해답값보다 좋으면 그 마디는 유망하다.
<img width="796" alt="스크린샷 2022-11-18 오후 1 30 18" src="https://user-images.githubusercontent.com/101544632/202617519-2cd23eb3-c9f2-4a77-8529-c899bd1d6949.png">

