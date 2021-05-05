# mela - scripting fp-like language

really liked the idea of that that expressive language
https://github.com/mkhan45/RustScript

### list of goals

- [ ] basic arithmetic

```
> 4 * -3 + 12 - -3 + 4 * 15
63
```

- [ ] variables
- [ ] lists
```
> let ls = [1, 2, 9, 4, 5]
> ls
[1, 2, 9, 4, 5]

> let ls = ls + [2, 4, 6, 8]
> ls
[1, 2, 9, 4, 5, 2, 4, 6, 8]

> ^ls
1

> $ls
[2, 9, 4, 5, 2, 4, 6, 8]
```

- [ ] ranges
