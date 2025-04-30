<h1>🖼️ Scalable Vector Graphics Generator (SVG via C++)</h1>

<p>This project implements a C++ program that reads geometric shape definitions from a text file and generates corresponding <strong>Scalable Vector Graphics (SVG)</strong> in HTML format. The project applies object-oriented design principles to model different SVG shape types as C++ classes and supports extensibility through subclassing. The final output is a unique piece of abstract geometric art, automatically generated from code.</p>

<hr>

<h2>🎯 Goals</h2>
<ul>
  <li>Learn C++ class design and polymorphism via SVG shape objects</li>
  <li>Implement at least <strong>two new shape subclasses</strong> in addition to <code>Circle</code></li>
  <li>Parse shape data from an input file and output valid <code>.svg</code> HTML</li>
  <li>Practice clean code with <code>clang-format</code> and <code>clang-tidy</code></li>
  <li>Set up and run C++ code in Docker using VS Code</li>
</ul>

<hr>

<h2>🛠 Technologies</h2>
<ul>
  <li>C++</li>
  <li>SVG Markup (HTML output)</li>
  <li>Clang Format & Clang Tidy</li>
  <li>Docker</li>
  <li>Object-Oriented Design</li>
</ul>

<hr>

<h2>📂 Project Structure</h2>
<pre><code>
├── main.cpp              # Program entry point
├── shape.h / shape.cpp   # Base SVG shape class
├── circle.h / circle.cpp # Circle subclass
├── rect.h / rect.cpp     # Rectangle subclass (example)
├── ellipse.h             # Optional: additional subclass
├── input1.txt            # Input file with shape definitions
├── svg1.svg              # Output file with generated SVG
├── runit.sh              # Script to compile and run program
├── README.md
</code></pre>

<hr>

<h2>📄 Sample Usage</h2>
<pre><code>
$ ./a.out input1.txt svg1.svg
</code></pre>

Or using the provided script:

<pre><code>
$ ./runit.sh
</code></pre>

<hr>

<h2>✅ Features</h2>
<ul>
  <li>Reads shape instructions from a plain text file</li>
  <li>Supports custom shape attributes (e.g., color, radius, position)</li>
  <li>Writes well-formed SVG tags into an HTML file</li>
  <li>Easily extensible with new shape subclasses</li>
  <li>Integrates formatting and linting tools</li>
</ul>

<hr>

<h2>🧠 What I Learned</h2>
<ul>
  <li>How to structure C++ programs using inheritance and abstract base classes</li>
  <li>How to interpret and output valid SVG markup</li>
  <li>Best practices for code formatting and linting with clang tools</li>
  <li>Using Docker for reproducible development environments</li>
</ul>

<hr>

<h2>📎 References</h2>
<ul>
  <li><a href="https://www.w3.org/TR/SVG2/shapes.html">SVG 2 Shape Reference (W3C)</a></li>
  <li><a href="https://csswiki.uwb.edu/visual-studio-code-using-docker/">Docker Setup for VS Code</a></li>
</ul>
