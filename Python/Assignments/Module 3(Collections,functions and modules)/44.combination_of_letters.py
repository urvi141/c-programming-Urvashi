import itertools

d = {'1': ['a','b'], '2': ['c','d']} 

for c in itertools.product(*[d[k] for k in sorted(d.keys())]):
    print(' '.join(c))