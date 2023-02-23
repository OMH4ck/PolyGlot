
char_1 <- "aaaaaaaaaaaa"
char_2 <- "bbbbbbbbbbbb"
length(unique(char_1)) #  329
length(unique(char_2))  # 329

identical(char_1, char_2)  #  FALSE
sum(char_1 %in% char_2)  #  329
sum(char_2 %in% char_1)  #  329

s1 <- sort(char_1)
### These vectors come from a (supposed) previous sorting but:
identical(char_1, s1) #  FALSE

s2 <- sort(char_2)
identical(char_2, s2)  #  FALSE

identical(s1, s2)  #  FALSE (!)

# Moreover ... 
identical(sort(s1), s1) ## FALSE (!!)
identical(sort(sort(s1)), sort(s1)) ## FALSE
identical( sort(sort(sort(s1))), sort(s1))## TRUE
