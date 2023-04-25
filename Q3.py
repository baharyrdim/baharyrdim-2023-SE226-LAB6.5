def sieve_of_eratosthenes(numbers):
    primes = []
    is_prime = [True] * (max(numbers) + 1)
    is_prime[0] = is_prime[1] = False
    for i in range(2, int(max(numbers) ** 0.5) + 1):
        if is_prime[i]:
            for j in range(i*i, max(numbers)+1, i):
                is_prime[j] = False
    for num in numbers:
        if is_prime[num]:
            primes.append(num)
    return primes
