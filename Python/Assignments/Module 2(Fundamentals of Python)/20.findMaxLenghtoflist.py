def get_max_length(lst):
    return len(max(lst, key=len))

print(get_max_length(['viram','urvashi']))