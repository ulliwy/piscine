cat $1 | grep -i bauer | grep -E -i "\bn\b|\bn.?i.?c.?o.?l.?a.?s.?\b" | grep -E -o "(\d-?){6,}"