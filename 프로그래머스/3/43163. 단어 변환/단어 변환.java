import java.util.*;

class Solution {
    public int solution(String begin, String target, String[] words) {
        int wordsCount = words.length;
        boolean[] checked = new boolean[wordsCount];
        Queue<Word> q = new LinkedList<>();
        q.add(new Word(begin, 0));
        
        while (!q.isEmpty()) {
            Word current = q.poll();
            String currentWord = current.w;
            int currentCount = current.count;
            if (currentWord.equals(target)) {
                return currentCount;
            }
            for (int i = 0; i < wordsCount; i++) {
                if (isDiffOneChar(currentWord, words[i]) && !checked[i]) {
                    q.add(new Word(words[i], currentCount + 1));
                    checked[i] = true;
                }
            }
        }
        return 0;
    }
    
    private boolean isDiffOneChar(String a, String b) {
        int count = 0;
        for (int i = 0; i < a.length(); i++) {
            if (a.charAt(i) != b.charAt(i)) {
                count++;
            }
            if (count > 1) {
                return false;
            }
        }
        return count == 1 ? true : false;
    }
    
    public class Word {
        String w;
        int count;
        
        public Word(String w, int count) {
            this.w = w;
            this.count = count;
        }
    }
}