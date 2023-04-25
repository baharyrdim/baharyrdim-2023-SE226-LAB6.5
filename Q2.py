def palindrome_strings(strings):
    return [s for s in strings if s == s[::-1]]
