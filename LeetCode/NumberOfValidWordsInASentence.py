class Solution:
    def countValidWords(self, sentence: str) -> int:
        words = sentence.split()
        countValidWords = len(words)
        punctuationMarks = ["!", ",", "."]
        digits = ["0", "1", "2", "3", "4", "5", "6", "7", "8", "9"]

        for i in words:
            if (i.isalpha() and i.islower() == False) or ("-" == i[0] or "-" == i[-1] or i.count("-") > 1 or ("-" == i[len(i) - 2] and i[-1] in punctuationMarks)):
                countValidWords -= 1
            else:
                for j in i:
                    if (j in digits) or (j in punctuationMarks and i.find(j) != len(i) - 1):
                        countValidWords -= 1
                        break

        return countValidWords
