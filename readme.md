# OWASP Top 10 - SAST Test Snippets

This repository provides simple, intentionally vulnerable code snippets in **Python**, **C/C++**, and **Go** for each of the OWASP Top 10 vulnerabilities. These examples are designed to trigger static application security testing (SAST) tools such as GitHub Copilot, CodeQL, or SonarQube.

## Folder Structure

Each folder contains one or more vulnerable files associated with a specific OWASP category.

| OWASP Category | Folder Name       | Languages Included |
|----------------|-------------------|---------------------|
| 1. Broken Access Control | `access-control` | Python, C++, Go |
| 2. Cryptographic Failures | `crypto-fail` | Python, C, Go |
| 3. Injection | `injection` | Python, C++, Go |
| 4. Insecure Design | `insecure-design` | Python, C, Go |
| 5. Security Misconfiguration | `misconfig` | Python |
| 6. Vulnerable and Outdated Components | `vuln-components` | Python |
| 7. Identification and Authentication Failures | `auth-fail` | Python |
| 8. Software and Data Integrity Failures | `integrity-fail` | Python |
| 9. Security Logging and Monitoring Failures | `no-logging` | Python |
| 10. Server-Side Request Forgery (SSRF) | `ssrf` | Python, Go |

## Disclaimer

This code is for **educational and testing purposes only**. Do not deploy in production environments.

## How to Use

- Run or scan these files using your SAST tool of choice.
- Review which rules are triggered and adjust severity/classification thresholds.

