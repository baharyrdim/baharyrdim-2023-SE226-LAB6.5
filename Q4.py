def anagrams(word, word_list):
    word_sorted = sorted(word.lower().replace(" ", ""))
    anagrams_list = []
    for w in word_list:
        if sorted(w.lower().replace(" ", "")) == word_sorted:
            anagrams_list.append(w)
    return anagrams_list
#Example
#word = "listen"
#word_list = ["enlists", "google", "inlets", "banana"]
#anagrams_list = anagrams(word, word_list)
#print(anagrams_list) # Output: ["enlists", "inlets"]


