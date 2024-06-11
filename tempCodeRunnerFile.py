
is_safe_state, safe_sequence = is_safe(processes, avail, max_need, allocation)
if is_safe_state:
    print("System is in a safe state.")
    print("Safe sequence is:", safe_sequence)
else:
    print("System is not in a safe state.")
