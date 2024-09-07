import java.util.*;

class Solution {
    private class Song {
        int number;
        int count;
        
        public Song(int number, int count) {
            this.number = number;
            this.count = count;
        }
    }
    
    public int[] solution(String[] genres, int[] plays) {
        // 장르 별 재생 횟수 맵
        Map<String, Integer> genreCount = new HashMap<>();
        // 장르 별 노래 목록
        Map<String, List<Song>> genreSong = new HashMap<>();
        
        for (int i = 0; i < genres.length; i++) {
            genreCount.put(genres[i], genreCount.getOrDefault(genres[i], 0) + plays[i]);
            genreSong.putIfAbsent(genres[i], new ArrayList<>());
            genreSong.get(genres[i]).add(new Song(i, plays[i]));
        }
        
        List<String> genreOrder = new ArrayList<>(genreCount.keySet());
        genreOrder.sort((a ,b) -> genreCount.get(b) - genreCount.get(a));
        
        List<Integer> result = new ArrayList<>();
        
        for (String s : genreOrder) {
            List<Song> currentGenreSongs = genreSong.get(s);
            currentGenreSongs.sort((a, b) -> a.count == b.count ? a.number - b.number : b.count - a.count);
            
            result.add(currentGenreSongs.get(0).number);
            if (currentGenreSongs.size() > 1) {
                result.add(currentGenreSongs.get(1).number);
            }
        }
        
        int resultSize = result.size();
        int[] answer = new int[resultSize];
        for (int i = 0; i < resultSize; i++) {
            answer[i] = result.get(i);
        }
        return answer;
    }
}