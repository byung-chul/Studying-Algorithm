import java.util.*;

class Solution {
    public int solution(int n, int[] lost, int[] reserve) {
        List<Integer> lostList = new ArrayList<>();
        List<Integer> reserveList = new ArrayList<>();

        Arrays.sort(lost);
        Arrays.sort(reserve);

        for (int l : lost) {
            if (!Arrays.stream(reserve).anyMatch(r -> r == l)) {
                lostList.add(l);
            }
        }
        for (int r : reserve) {
            if (!Arrays.stream(lost).anyMatch(l -> l == r)) {
                reserveList.add(r);
            }
        }

        for (int r : new ArrayList<>(reserveList)) {
            if (lostList.contains(r - 1)) {
                lostList.remove(Integer.valueOf(r - 1));
                reserveList.remove(Integer.valueOf(r));
            } else if (lostList.contains(r + 1)) {
                lostList.remove(Integer.valueOf(r + 1));
                reserveList.remove(Integer.valueOf(r));
            }
        }

        return n - lostList.size();
    }
}