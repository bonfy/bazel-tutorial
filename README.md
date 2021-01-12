# bazel-tutorial
Bazel Tutorial


## Why Bazel

* Speed, speed and more speed, Ferrari-like performance. Because of caching, compilation and unit test speed is ridiculous.
* One tool to rule them all. Bazel supports Go, Java, C++, Android, iOS, on OSX, Linux, and Windows.
* Extensibility. Add plugins and call external tools.
* The tool scales. It handles codebases of any size and integrates into CI. The Kubernetes/Kubernetes repository is a huge repo with multiple containers and binaries.
* Build vendoring for go. We were not able to fully use it in kops because of some challenges, but for other projects it works great. Watch out dep, cause you have a serious competitor.