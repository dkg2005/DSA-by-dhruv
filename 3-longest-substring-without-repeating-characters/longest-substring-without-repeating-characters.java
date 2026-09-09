class Solution {
    public int lengthOfLongestSubstring(String s) {
        int n = s.length();
        int maxLen = 0;
        HashSet<Character>st = new HashSet<>();
        int i = 0;
        for(int r=0; r<n; r++){
            char ch = s.charAt(r);
            while(st.contains(ch)){
                st.remove(s.charAt(i));
                i++;
            }
            st.add(ch);
            maxLen = Math.max(maxLen, st.size());
        }  
        return maxLen; 
    }
}