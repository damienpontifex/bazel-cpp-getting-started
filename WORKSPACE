workspace(name = "com_github_damienpontifex_cppflags")

http_archive(
    name = "com_github_gflags_gflags",
    sha256 = "ae27cdbcd6a2f935baa78e4f21f675649271634c092b1be01469440495609d0e",
    strip_prefix = "gflags-2.2.1",
    urls = [
        "https://github.com/gflags/gflags/archive/v2.2.1.tar.gz"
    ]
)

# We're pinning to a commit because this project does not have a recent release.
# Nothing special about this commit, though.
http_archive(
    name = "com_github_google_glog",
    sha256 = "44df73b1e30d527a77810435b71cd2b3c942e83709a5e746f8e306caab2265b1",
    strip_prefix = "glog-abce78806c8a93d99cf63a5a44ff09873f46b56f",
    urls = [
        "https://github.com/google/glog/archive/abce78806c8a93d99cf63a5a44ff09873f46b56f.tar.gz"
    ]
)

# We're pinning to a commit because this project does not have a recent release.
# Nothing special about this commit, though.
http_archive(
    name = "com_google_googletest",
    urls = [
        "https://github.com/google/googletest/archive/dfa853b63d17c787914b663b50c2095a0c5b706e.tar.gz",
    ],
    strip_prefix = "googletest-dfa853b63d17c787914b663b50c2095a0c5b706e",
    sha256 = "313a16fba8f0be8ee20ba9883e044556044cbd1ae6cea532473d163a843ef991",
)