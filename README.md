# registry

All cpkg packages we support in the upstream

## How to publish packages to the upstream?

### 1. Make your package

Your package must have a build.c file for it to be made, note this doesn't mean the package needs to be written in C, as you can use: <br />

```c
cpkg.command_run("COMMAND_HERE");
```

To execute the build commands for your package instead.

### 2. Create an issue to the registry repository [right here](https://github.com/cpkg-dev/registry/issues)

Your package needs to be attached in the issue with the following:

- What it is, what its for
- Who is going to be maintaining it
- If Ai was used in the package (and how it was used).

The issue should be structured similar to this (this is an imaginary package called "gloop" a wayland wallpaper manager):

```markdown
## Package Submission

### Package Details

- **Package Name:**
- **Version:**
- **Description:**
- **License:**

### Source & Verification

- **Source URL:**
- **Verification Hash (SHA256):**
- **Install Source (Source/Binary):**

### Maintainer Information

- **Primary Maintainer:**
- **Upstream Project URL:**
- **AI usage:**

### Checklist

- [ ] I have verified the build script (`build.c`) compiles cleanly.
- [ ] The hash matches the provided archive.
- [ ] I agree to maintain this package within the registry.
- [ ] I have disclosed my Ai usage and agree if incorrect discipline will be taken against me.
```

### 3. Updating a package

```markdown
### Package Details

- **Package Name:** gloop
- **Version:** v0.2.0

### Source & Verification

- **Source URL:** https://raw.githubusercontent.com/AmetrineFoundation/cpkg/main/binary/gloop.appimage
- **Verification Hash (SHA256):** RANDOM_SHA256_HASH
```
